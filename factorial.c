
/*
Calclar el factorial usando la recursividad
*/
#include <stdio.h>
int factorial(int);
int main()
{
    int facto ,n;
    scanf("%d", &n);
    if(n < 0){
        printf("No");
    }
    else{
        facto = factorial(n);
        printf("%d", facto);
    }
    return 0;
}
int factorial(int n){
    int result = 0;
    if(n == 0){
        result = 1;
    }
    else{
        result += n * factorial(n-1);
    }
    return result;
}
