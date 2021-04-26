//z23.c
#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
	if ( argc == 0 )
		puts( "Nema dostupne komandne linije." );
	else
	{ // Stampa naziv programa.
		printf( "Program koji se izvrsava: %s\n", argv[0] );
		if ( argc == 1 )
			puts( "Nema argumenata preuzetih iz komandne linije." );
		else
		{
			puts( "Argumenti komandne linije su:" );
		for ( int i = 1; i < argc; ++i ) // Stampa svaki argument
			// u posebnoj liniji.
			puts( argv[i] );
		}
	}
	return EXIT_SUCCESS;
}