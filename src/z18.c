//z18.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
  typedef double Niz[10];
  Niz Q[3];
  printf("\n%d",sizeof(Niz));		// 10x8=80 bajtova
  printf("\n%d",sizeof Q);  		// 3x10x8=240 bajtova
  printf("\n%d",sizeof Q[1]); 		// iznosi 10x8=80
  printf("\n%d\n",sizeof Q[2][7]); 	// 8 bajtova

  return EXIT_SUCCESS;
}
