//z26.c

#include <stdio.h>
#include <stdlib.h>

// Funkcija binarySearch() pretrazuje uredjeni niz.
// Argumenti: Vrednost traženog elementa,
//            niz elemenata tipa long, njegova duzina.
// Rezultat: Pokazivac na nadjeni element,
// ili NULL ako nije nadjen u nizu.

long *binarySearch( long val, long array[], int n )
{
	int m = n/2;
	if ( n <= 0 ) return NULL;
	if ( val == array[m] ) return array + m;
	if ( val < array[m] ) return binarySearch( val, array, m );
	else return binarySearch( val, array+m+1, n-m-1 );
}

int main(void)
{
	long niz[]={123451,123452,123453,123454,123455,123456,123457,123458,123459};
	printf("\nPronadjen:%lu",*binarySearch(123455,niz,9));
	return EXIT_SUCCESS;
}
