//z13.c
#include <stdio.h>
#include<stdlib.h>

int main()
{
	int i;
	for(i=1; i<=5; i++)
	{
		if(i==3) continue;
		printf("i = %d\n", i);
	}
	return EXIT_SUCCESS;
}
