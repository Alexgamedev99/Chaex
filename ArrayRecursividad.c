#include <stdio.h>
int sumar(int[], int);
int main()
{
    int array[5] = {1,2,3,4,5};
    printf("%d", sumar(array,5));
    return 0;
}

int sumar(int d[], int i){
    if(i ==  0){
       return  0;
    }
    else{
         return d[i-1] + sumar(d,i-1);
    }
    
}