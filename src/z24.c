//z24.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Prototipovi funkcija  memset() and strcpy().

struct Node 
{ 
	long key;
	char name[32];
	/* ... jos clanova strukture ... */
	struct Node *next;
};

void initNode(struct Node *);	//Funkcija pristupa adresi koja joj stize kroz argument
void printNode(const struct Node *);
struct Node *mkNode(void);	//Funkcija vraca pokazivac na strukturu

int main(void)
{
	struct Node *cvor;
	cvor=mkNode();
	printNode(cvor);

	return EXIT_SUCCESS;
}

void initNode(struct Node *pNode) // Inicijalizuje strukturu *pNode.
{
	memset(pNode, 0, sizeof(*pNode)); //Postavlja 0 u n bajtova
	pNode->key=1;
	strcpy(pNode->name, "Mitar Miric");
}

void printNode(const struct Node *pNode)
{
	printf( "Key: %ld\n", pNode->key );
	printf( "Name: %s\n", pNode->name );
	/* ... */
}

struct Node *mkNode(void)
{
	struct Node *pNode = malloc( sizeof(struct Node) );
	if ( pNode != NULL )
	initNode( pNode );
	return pNode;
}