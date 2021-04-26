//z38.c
/*Unos niza proizvoljne dimenzije i pronalaženje najveceg elementa				*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n;// Dimenzija niza
	int *a;
	int *pa;
	printf("\nAdresa pokazivacke promenljive je: %p\n",&a);
	int i, max;
	do
	{
		printf("Unesi dimenziju niza : ");
		scanf("%d", &n);
	}while(n<=0);

	/*  Sada znamo koliko je memorije potrebno i pozivamo funkciju malloc za dinamicku alokaciju memorije*/
	printf("\nPokusaj alociranja %d 32.bitnih reci",n);
	a = (int*) malloc(n*sizeof(int));	// U slucaju da nema dovoljno memorije malloc vraca NULL

	if (a == NULL)
	{
		printf("Greska : Nema dovoljno memorije!\n");
		return EXIT_FAILURE;
	}

	printf("\nRezervisani memorijski blok:\n od %p do %p",&a[0],&a[n-1]);
    printf("\nPrva lokacija nakon bloka je: %p \n \n",&a[n]);
	/* Nadalje a koristimo indeksnom notacijom operator indeksiranja []				*/

	for (i = 0; i<n; i++)
	{
		printf("%p\ta[%d]=",&a[i], i);
		scanf("%d", &a[i]);
	}
	/* Nalazimo maksimum 						*/
	max = a[0];
	for (i = 1; i<n; i++)
		if (a[i] > max)
			max = a[i];
	printf("Najveci element je %d\n", max);
	pa=a;
	free(a);
	printf("\nOslobodjeni blok je pocinjao sa adresom:%p",pa);
	return EXIT_SUCCESS;
}
