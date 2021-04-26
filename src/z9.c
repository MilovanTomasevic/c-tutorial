//z9.c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
    bool hodaj = true;  // Isto kao i hodaj = 1;
    while(hodaj) {
        printf("Izvrsava se za hodaj je true.\n");
        hodaj = false;    // Isto kao i hodaj = 0;
    }
    printf("Stani!\n");
    return EXIT_SUCCESS;
}
