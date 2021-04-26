//z101.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
  long niz1[]={0,1,2,3,4};
  long niz2[5];
  long niz3[10]={0,1,2,3,4};
  
  system("cls");
  printf("\n\t\tniz1\tniz2\tniz3\n");
  printf("-------------------------------------\n");
  printf("velicina niza:\t%dB\t%dB\t%dB\n", sizeof(niz1), sizeof(niz2), sizeof(niz3));
  printf("-------------------------------------\n\n");
  
  return EXIT_SUCCESS;
}