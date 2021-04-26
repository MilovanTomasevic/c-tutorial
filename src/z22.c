//z22.c

#include <stdio.h>
#include <stdlib.h>

int main ( )
{

    int a[10] = {1, 2, 3, 4, 5, 6, 7 ,8, 9, 0};

    int *pa;
    int i;

    pa = a;
    printf("%d\n\n", *pa);

    printf("%d\n\n", *(a+1));

    // ispis elementa sa parnim indexom upotrebom pokazivaca
	
    for (i=0; i<10; i+=2) {
        pa = a+i;
        printf("%d\n", *pa);
    }

	return EXIT_SUCCESS;
}