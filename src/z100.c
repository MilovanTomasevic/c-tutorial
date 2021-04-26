//z100.c
#include<stdio.h>
#include<stdlib.h>

int main()
{
  int niz1[5];
  static long niz2[5];
   int * niz3[5];
  static  int * niz4[5];
  system("cls");
  printf("\nindex\tniz1\tniz2\tniz3\t\tniz4\n");
  printf("------------------------------------------------\n");
  for(int i=0;i<5;i++)
    printf("%d\t%d\t%d\t%p\t%p\n",i,niz1[i],niz2[i],niz3[i],niz4[i]);

  return EXIT_SUCCESS;
}