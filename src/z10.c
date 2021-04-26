/*z10.c Primer programa koji demonstrira rukovanje izuzetkom*/

#include <stdio.h>
#include <errno.h>        // errno
#include <stdlib.h>       // malloc, free
#include <string.h>       // strerror

extern int errno;

int main(void)
{

    /* 	pokazivac na char, zahtev za alociranjem 4,000,000,000
		elemenata za skladištenje podataka (deklarisano kao celobrojna konstanta
		tipa unsigned long int). (Ako sistem na kojem se izvršava program nema 4GB
		raspolozive memorije, onda ce poziv funkcije malloc biti neuspesan)
     */
    char *pCh = malloc( 4000000000UL );

    if ( pCh == NULL ){
        puts("malloc failed");
        puts(strerror(errno));
    }
    else
    {
        /* 	preostali kod podrazumeva da je memorija uspešno alocirana ...  */
        free( pCh );
		puts ("Memorija je uspesno alocirana");
    }

    return EXIT_SUCCESS;
}
