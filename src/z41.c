/*
 * z41.c
 * Red je implementiran kao niz pokazivaca
 * na znakove. Ogi Hansen
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BRBAJTA 80

/* prototipovi funkcija */
int ured(char *);
char *izreda(void);

int
main (void)
{
	char red[BRBAJTA+1];

	while (1) {
		printf("Komanda (u, p ili i) + Return: ");
		gets(red);
		switch (red[0]) {
			case 'u':
			case 'U':
			/* upisi (ured) novu poruku */
			printf("Poruka: ");
			gets(red);
            if (ured(red) != 0)
              printf("Red je pun\n");
			break;
		case 'p':
		case 'P':
			/* procitaj (izreda) poruku */
			printf("%s\n", izreda());
			break;
		case 'i':
		case 'I':
			return EXIT_SUCCESS;
		}
	}
	return EXIT_SUCCESS;
}

#define REDVEL 10

/* red za poruke */
static char red[REDVEL][BRBAJTA+1];
static int upis = 0;
static int citanje = REDVEL-1;

/*
 * ured()
 *
 * Smesti element (tekst poruke) u red ako red nije pun.
 * Ako je red pun, prikazi gresku.
 */

int
ured(char *poruka)
{
	int pk = 0;

	if (upis != citanje) {
		strcpy(red[upis++], poruka);
		if (upis == REDVEL)
			upis = 0;
	}
	else
		/* red je pun */
		++pk;

	return pk;
}

/*
 * izreda()
 *
 * Uzmi element iz reda i vrati pokazivac na njega.
 * Ako je red prazan, prikazi gresku.
 */

char *
izreda(void)
{
    if ((citanje+1) % REDVEL != upis) {
        if (++citanje == REDVEL)
			citanje = 0;
		return red[citanje];
	}
	else
		return "Red je prazan";
}
