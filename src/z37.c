//z37.c
#include <stdio.h>
#include <stdlib.h>


int main ()
{
	int *br;
	int a=5;
	printf("\n adresa %p vrednost %d naziv a",&a,a);
	printf("\nAdresa pokazivacke promenljive je:%p",&br);
	br = (int *) malloc (sizeof(int));//malloc vraća generički pokazivač

/* malloc-u se prosledjuje kolicina potrebne memorije u bajtovima,
a on vraca genericki pokazivac (void*) koji pre koriscenja treba konvertovati
u odgovarajuci pokazivacki tip.*/
	printf("\nRezervisana memorijska lokacija je:%p",br);
    printf("\nUnesite celi broj: ");
    scanf("%d", br);

    printf("Ucitan broj je: %d", *br);

	free(br); /* oslobadjanje (dealociranje) */
	printf("\nOslobodjena memorijska lokacija je:%p\n",br);
	return EXIT_SUCCESS;
}
