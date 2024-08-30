//Cambia el valor de de A a B y de B a A;
#include <stdio.h>
void Sawp(int*, int*);
int main()
{
   int a = 8;
   int b = 4;
  Sawp(&a,&b);
    printf("%d %d",a,b);
    return 0;
}
void Sawp(int* a, int* b){
    int tmb = *a;
    *a = *b;
    *b = tmb;
}