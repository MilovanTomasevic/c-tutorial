/*z5.c Primer programa koji demonstrira oblast vazenja identifikatora*/

#include<stdio.h>
#include<stdlib.h>					
							

char zbir=0;									//oblast vazenja fajl
										

int main(void)						
{
	int a=256;
	int b=1;
	
	if ((a+b)>256)
	{
		short int zbir=0;						//oblast vazenja blok
		zbir=a+b;
		printf("\n zbir je short tipa a+b=%d\n",zbir);
	}

		zbir=a+b;
		printf("\n zbir je char tipa a+b=%d\n",zbir);	
	
	return EXIT_SUCCESS;			 
}