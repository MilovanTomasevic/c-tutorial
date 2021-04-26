//z35.c 
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x, i, b=0;

	printf("Unesite broj: ");
	scanf("%d", &x);

	while(x!=0) {
          	/* x & 1 proverava da li je poslednja binarna cifra broja x jednaka 1 */
		if (x & 1) {
		      b++;
		      printf("1");
		}  else {
		      printf("0");
		}

		x>>=1;
    }

    printf("\n\nBroj jedinica u binarnom zapisu: %d\n", b);

    return EXIT_SUCCESS;
}
