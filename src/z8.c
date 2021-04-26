/*z8.c Primer programa koji demonstrira upotrebu  tipa void*/

#include<stdio.h>
#include<stdlib.h>

enum daniUsedmici {pon, ut, sr, cet, pet, sub, ned};

void ispis(enum daniUsedmici);	//prototip funkcije tipa void

int main(void)		//lista parametara funkcije je void
{
	enum daniUsedmici dan = ned;
	ispis(dan);
	
	return EXIT_SUCCESS;			 
}

void ispis(enum daniUsedmici dan)
{
	(void)printf("\n%d",dan);	//izraz tipa void
}