#include <stdio.h>
#include <string.h>

union Data {
   int i;
   float f;
   char str[20];
};

int main( ) {

   union Data data;

   data.i = 5;
   printf( "data.i : %d\n", data.i);

   data.f = 10.2;
   printf( "data.f : %f\n", data.f);

   strcpy( data.str, "ASCII kodirani tekst");
   printf( "data.str : %s\n", data.str);

   printf("Velicina objekta:%dB\n", sizeof(data));

    printf( "data.i : %d\n", data.i);

   return 0;
}
