/*
 * z39.c 
 * Stek je implementiran kao niz pokazivaca na znakove.
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BRBAJTA 80

/* prototipovi funkcija */
int push(char *);
char *pop(void);

int main (void)
{
	int zn;
	char red[BRBAJTA+1];

	while (1) {
		printf("Komanda (u, p ili i) + Return: ");
		gets(red);
		switch (red[0]) {
			case 'u':
			case 'U':
				/* upisi (push) novu poruku */
				printf("Poruka: ");
				gets(red);
				if (push(red) != 0)
					printf("Stek je pun\n");
				break;
			case 'p':
			case 'P':
				/* procitaj (pop) poruku */
				printf("%s\n", pop());
				break;
			case 'i':
			case 'I':
				return EXIT_SUCCESS;
			}
		}

		return EXIT_SUCCESS;
}

#define STEKVEL 10

/* stek za poruke */
static char stek[STEKVEL][BRBAJTA+1];
static int indeks = 0;

/*
 * push()
 *
 * Smesti element (tekst poruke) na stek ako stek nije pun.
 * Ako je stek pun, prikazi gresku.
 */

int push(char *poruka)
{
	int pk = 0;

	if (indeks < STEKVEL)
		strcpy(stek[indeks++], poruka);
	else
		++pk;

	return pk;
}

/*
 * pop()
 *
 * Uzmi element sa vrha steka i vrati pokazivac na taj element.
 * Ako je stek prazan, prikazi gresku.
 */

char * pop(void)
{
	if (indeks > 0)
		return stek[--indeks];
	else
		return "Stek je prazan";
}
