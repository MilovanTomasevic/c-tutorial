//z17.c
#include <stdio.h>
#include<stdlib.h>

int main()
{
	/* Niz inicijalizujemo tako sto mu navodimo vrednosti u viticasnim zagradama */
        /* Dimenzija niza se odredjuje na osnovu broja inicijalizatora */
	int a[] = {1, 2, 3, 4, 5, 6};
  int b[sizeof(a)/sizeof(int)];//Niz b je iste dimenzije kao niz a
  int i;
	/* Isto vazi i za niz karaktera */
	char s[] = {'a', 'b', 'c'};

	/* Ekvivalentno prethodnom bi bilo
	char s[] = {97, 98, 99};
	*/

	/* Broj elemenata niza */
	int a_br_elem = sizeof(a)/sizeof(int);
	int s_br_elem = sizeof(s)/sizeof(char);

  /* Kopiramo elemente niza a u niz b */

	for (i = 0; i < a_br_elem; i++)
		b[i]=a[i];

	/* Ispisujemo nizove */

	puts("***************");

	for (i = 0; i < a_br_elem; i++)
		printf("a[%d]=%d\n",i, a[i]);

	puts("***************");

	for (i = 0; i < a_br_elem; i++)
		printf("b[%d]=%d\n",i, b[i]);

	puts("***************");

	for (i = 0; i < s_br_elem; i++)
		printf("s[%d]=%c\n",i, s[i]);

	puts("***************");

	for (i = 0; i < s_br_elem; i++)
		printf("s[%d]=%d\n",i, s[i]);

  return EXIT_SUCCESS;
}
