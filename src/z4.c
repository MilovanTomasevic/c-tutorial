/*z4.c Primer programa koji demonstrira oblast vazenja identifikatora*/

#include<stdio.h>
#include<stdlib.h>					
#define pi 3.14							//konstanta pi, oblast vazenja fajl

double obimKruga(double poluprecnik);	//parametar poluprecnik,
										//oblast vazenja prototip funkcije obimKruga()

int main(void)						
{
	double poluprecnik=1.0;			//promenljiva poluprecnik, 
									//oblast vazenja funkcija main()
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
	return EXIT_SUCCESS;			 
}
double obimKruga(double poluprecnik)		//parametar poluprecnik, 
											//oblast vazenja funkcija obimKruga()
{
	return 2*poluprecnik*pi;
}