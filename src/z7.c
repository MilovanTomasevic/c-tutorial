/*z7.c Primer programa koji demonstrira upotrebu enum tipa */

#include<stdio.h>
#include<stdlib.h>

enum daniUsedmici {pon, ut, sr, cet, pet, sub, ned};

int main(void)
{
	const char* danImena[] = {"pon", "ut", "sr", "cet", "pet", "sub", "ned"};
	enum daniUsedmici dan = sub;
	printf("\n%d\t",dan);
	printf("%s",danImena[dan]);

	return EXIT_SUCCESS;
}
