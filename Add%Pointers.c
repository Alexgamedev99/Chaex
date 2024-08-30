#include <stdio.h>
void Change(int*);
int main()
{
    int a = 5;
    Change(&a);
    printf("%d",a);
    return 0;
}
void Change(int* a){
    //int** b = &a;
    //**b+=5;
    *a+=5;
}