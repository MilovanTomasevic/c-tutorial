#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef char Tstr20[21];
struct node
{
   Tstr20 element;
   struct node *next;
};

void create(struct node **,Tstr20);
void reverse(struct node **);
void release(struct node **);
void display(struct node *);

int main(int argCnt, char *argVel[])
{
    if (argCnt==1)argVel[1]="test.txt";
    struct node *p = NULL;
    create(&p,argVel[1]);
    display(p);
    reverse(&p);
    display(p);
    release(&p);

    return 0;
}

void create(struct node ** head,Tstr20 fileName)
{
    FILE *pf;
    Tstr20 str1;
    struct node *temp, *rear;
    if((pf=fopen(fileName,"r"))==NULL)exit(1);
    while(fscanf(pf,"%s",str1)!=EOF)
        {
            temp = (struct node *)malloc(sizeof(struct node));
            strcpy(temp->element,str1);
            temp->next = NULL;
            if (*head == NULL)
            {
                *head = temp;
            }
            else
            {
                rear->next = temp;
            }
            rear = temp;
            }
}

void display(struct node *p)
{
    while (p != NULL)
    {
        printf("%s\t", p->element);
        p = p->next;
    }
    printf("\n");
}

void reverse(struct node **head)
{
    struct node *p, *q, *r;
    p = q = r = *head;
    p = p->next->next;
    q = q->next;
    r->next = NULL;
    q->next = r;

    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    *head = q;
}

void release(struct node **head)
{
    struct node *temp = *head;
    *head = (*head)->next;
    putchar('\n');
    printf("Oslobadjam:\n");
    while ((*head) != NULL)
    {
        printf("%s\n", temp->element);
        free(temp);
        temp = *head;
        (*head) = (*head)->next;
    }
        printf("%s", temp->element);
        free(temp);
}
