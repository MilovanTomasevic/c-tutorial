//z15.c
/*
    Ternarni operator- ? :
*/

#include <stdio.h>

int main()
{       
    int a, b, max;  
    printf("Unesite a i b: ");
    scanf("%d %d",&a, &b);

    /* Nalazenje maksimuma od brojeva a i b pomocu ternarnog operatora */
    max = (a>b) ? a : b ;

    /* Analogno zapisano pomocu if-else naredbe:
    if (a>b) max = a;
    else max = b;
    */
   
    printf ("Veci broj je %d.\n", max);

    return 0;
}