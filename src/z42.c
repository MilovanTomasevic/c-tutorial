//z42.c
#	include <stdio.h>
#	include <stdlib.h>

struct node 
{
    int data;
    struct node *link;
};

void insert(struct node **front, struct node **rear, int value)
{
    struct node *temp;

    /*kreiranje novog cvora koriscenjem prosledjene vrednosti */
    temp=(struct node *)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Greska pri alociranju memorije.\n");
        exit(0);
    }
    temp->data = value;
    temp->link=NULL;

    if(*rear == NULL)
    {
        *rear = temp;
        *front = *rear;
    }
    else
    {
        (*rear)->link = temp;
        *rear = temp;
    }
}



void delete(struct node **front, struct node **rear, int *value)
{

    struct node *temp;

    if((*front == *rear) && (*rear == NULL))
    {
        printf("Red je prazan. Ne moze se obrisati vrednost.\n");
        exit(0);
    }

    *value = (*front)->data;
    temp = *front;
    *front = (*front)->link;

    if(*rear == temp)
        *rear = (*rear)->link;

    free(temp);
}

int main()
{
    struct node *front=NULL,*rear = NULL;
    int n,value;

    do
    {
        do
        {
            printf("Unesite element koji zelite da dodate u red:\n");
            scanf("%d",&value);

            insert(&front,&rear,value);

            printf("Unesite 1 za dodavanje novog elementa u red:\n");
            scanf("%d",&n);

        } while(n == 1);

    printf("Unesite 1 za brisanje elementa iz reda:\n");
    scanf("%d",&n);

    while(n == 1)
    {
        delete(&front,&rear,&value);
        printf("Obrisana vrednost je %d\n",value);

        printf("Unesite 1 za brisanje elementa iz reda:\n");
        scanf("%d",&n);

    }

    printf("Unesite 1 za dodavanje novog elementa u red:\n");
    scanf("%d",&n);

    } while(n==1);

    return 0;
}
