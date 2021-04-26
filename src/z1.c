//z1.c Primer programa koji racuna i ispisuje obim kruga

#include<stdio.h>
#include<stdlib.h>					//Pretprocesorska direktiva
//#define pi 3.14						//pi je konstanta

double obimKruga(double);			//Deklaracija funkcije (prototip)

int main(void)						//Pocetak definicije funkcije main()
{
	double poluprecnik=1.0;			//Vrednost poluprecnika je 1.0
	double obim=0.0;
	
	puts("Obim kruga");
	printf("\n");
	puts("Poluprecnik	Obim");
	puts("---------------------");
	obim=obimKruga(poluprecnik);
	printf("%10.2lf %10.2lf\n",poluprecnik,obim);
	
	poluprecnik=5.0;
	obim=obimKruga(poluprecnik);	
	printf("%10.2lf %10.2lf\n",poluprecnik,obim);	
	return EXIT_SUCCESS;			//EXIT_SUCCESS i EXIT_FAILURE 
}									//simbolicke konstante definisane u stdlib.h 

/*	Funkcija obimKruga() izracunava obim kruga za zadati poluprecnik. 
	Parametar: poluprecnik kruga
	Povratna vrednost: Obim kruga
*/
double obimKruga(double poluprecnik)		//Pocetak definicije funkcije obimKruga()
{
	const double pi=3.14;					//Alternativni kod za definiciju konstante
	return 2*poluprecnik*pi;
}