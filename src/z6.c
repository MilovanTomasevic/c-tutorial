/*z6.c Primer programa koji demonstrira upotrebu kompleksnog tipa*/

#include<stdio.h>
#include<stdlib.h>
#include<complex.h>					
																	
int main(void)						
{
	double complex z=1.0+2.0*I;
	printf("\nz= %lf + i%lf\n", creal(z), cimag(z));	
	z*=I;	//Rotiraj z 90 +
	printf("\nz= %lf + i%lf\n", creal(z), cimag(z));
	return EXIT_SUCCESS;			 
}