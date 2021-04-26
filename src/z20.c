//z20.c
#include <stdio.h>
#include <stdlib.h>
int main() 
{
    int i;
    int *pi;

    i = 7;
    pi = &i;

    printf("Promenljiva - adresa:\t %p, vrednost:\t %d\n\n", &i, i);
    printf("Pokazivac   - adresa:\t %p, vrednost:\t %p\n\n", &pi, pi);
    printf("Pokazivac   - vrednost:\t %p, sadrzaj:\t %d\n\n", pi, *pi);

    i = 10;

    printf("Pokazivac   - vrednost:\t %p, sadrzaj:\t %d\n\n", pi, *pi);

    (*pi)++;

    printf("Promenljiva - adresa:\t %p, vrednost:\t %d\n\n", &i, i);

    return EXIT_SUCCESS;
}
