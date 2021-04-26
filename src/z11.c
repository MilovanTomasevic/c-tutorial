/*z11.c Prefiksno i postfiksno uvecanje i umanjenje*/

#include<stdio.h>
#include<stdlib.h>

int main(void)					
{
	int i=0;
	int j;
	
	j=i++;					//j preuzima 0, i prelazi u 1
	printf("\nj=%d",j);
	printf("\ni=%d",i);	
	j=++i;					//i prelazi u 2, j preuzima 2
	printf("\nj=%d",j);
	printf("\ni=%d",i);
	
	return EXIT_SUCCESS;
}

