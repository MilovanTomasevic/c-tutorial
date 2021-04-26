/*z2.c Primer programa koji ispisuje naziv prekinute funkcije*/
#include<stdio.h>
#include<stdlib.h>
 
int main(void)
{
	if(1)
	{
		puts(__func__);			//Unapred definisan identifikator
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}