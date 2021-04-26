//z19.c

#include <stdio.h>
#include <stdlib.h>
#define MAXL 80


int main()
{
    FILE *pf;
    char str[MAXL];

    pf=fopen("test.txt","r");

    if(pf!=NULL){
        while(fgets(str, MAXL, pf)!=NULL)
            puts(str);

        fclose(pf);
    } else {
        printf("%p\tNije moguce otvoriti datoteku ili datoteka ne postoji.",pf);
    }
    /*00000000        Nije moguce otvoriti datoteku ili datoteka ne postoji.*/

	return EXIT_SUCCESS;
}
