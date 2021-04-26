//z14.c

#include<stdio.h>
#include<stdlib.h>

int main() {
    float a, b, rez;
    char op;

    printf("Unesite dva broja: ");
    scanf("%f %f", &a,  &b);
    printf("Unesite operaciju: ");
    scanf(" %c", &op);

    switch(op) {
        case '+': rez = a + b;
                  break;
        case '-': rez = a - b;
                  break;
        case '*': rez = a * b;
                  break;
        case '/': rez = a / b;
                  break;
        default:  printf("Pogresna operacija!\n");
    }

    printf("Rezultat: %f", rez);

    return EXIT_SUCCESS;
}
