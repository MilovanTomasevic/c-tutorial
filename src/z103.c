#include<stdio.h>

struct pb_st {
 int x:3, y:4;
 unsigned z:2, w:5;
};

struct tacka_st {
unsigned int red : 5;
unsigned int kol : 7;
unsigned int vidljiv : 1;
unsigned int tabelaboja : 3;
};

int main()
{
struct pb_st PB1;
struct tacka_st T1;
printf("PB1: %d \tT1: %d",sizeof(PB1),sizeof(T1));
return 0;
}
