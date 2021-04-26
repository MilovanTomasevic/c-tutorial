//nz36.c 
#include <stdio.h>
#include <stdlib.h>

int main () {
  while (1) {
    short dec;
    int i;

    printf ("Decimalni broj? ");
    scanf ("%hd", &dec);

    if (dec == 9999) break;

    printf ("Binarni broj:   ");
    for (i=1; i<=16; i++) {
      printf ("%d", (dec & 0x8000) != 0);
      dec <<= 1;
      if (i % 4 == 0) printf (" ");
    }
    printf ("\n");
  }

  return EXIT_SUCCESS;
}
