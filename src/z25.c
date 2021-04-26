//z25.c
/*
  * Princip grube sile. 
  * Prvo pretrazi ceo niz,kako bi našao prvi podoban element (npr. najveći ili najmanji). 
  * Smesti pronađeni element na prvo mesto u nizu. 
  * Nakon toga pretrazuje celi ostatak niza  kako bi nasao sledeci takav element i smestio na sledece mesto u nizu. 
  * Postupak se ponavlja za ostatak niza bez prvog i drugog mesta itd. 
  * Vremensku složenost n². 
  * Količina korišćene memorije je 1 ukoliko se izmene vrše na originalnom nizu.
*/






// Funkcija swapf( ) menja vrednosti paru elemenata tipa float.
// Argumenti: Dva pokazivaca na float.
// Rezultat: Nema.
#include <stdio.h>
#include <stdlib.h>

inline void swapf( float *p1, float *p2 ) // Definicija umetnute funkcije.
{
	float tmp = *p1; *p1 = *p2; *p2 = tmp;
}

// Funkcija selection_sortf( ) koristi algoritam selection-sort
// sa ciljem uredenja niza elemenata tipa float.
// Argumenti: Niz tipa float, i njegova duzina.
// Rezultat: Nema.

void selection_sortf( float a[], int n ) // Uredjuje niz duzine n.
{
	register int i, j, mini; // Tri indeksne promenljive.
	for ( i = 0; i < n - 1; ++i )
	{
		mini = i; // Trazi minimum pocevsi od indeksa i.
		for ( j = i+1; j < n; ++j )
			if ( a[j] < a[mini] )
        mini = j;
		swapf( a+i, a+mini ); // Zamenjuje minimum elementa koji je na indeksu i.
	}
}

int main(void)
{
	int i;
	float niz[]={3.5, 4.2, -7.4, 8.1, 0.1, -0.11};
	selection_sortf(niz,6);
	puts("sortiran niz");
	puts("------------");
	for(i=0;i<6;i++)
		printf("\n%d\t%-3.3f",i,niz[i]);

	return EXIT_SUCCESS;
}
