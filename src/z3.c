/*z3.c Primer programa koji prikazuje upotrebu  labele*/
#include<stdio.h>
#include<stdlib.h>
 

int main(void)
{
	int a = 1;
	goto JUMP;					//Upotreba naredbe goto je opasna
	printf("%d\n",a);
JUMP:;							//Labela
	int b = 0;
	printf("%d\n",b);

	return EXIT_SUCCESS;
}