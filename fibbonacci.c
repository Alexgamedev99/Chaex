#include <stdio.h>

int fibo(int);
int main()
{
   int n = 0;
   scanf("%d",&n);
   int result  = fibo(n);
   printf("%d", result);
   return 0;
}
int fibo (int n){
    if(n == 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else{
        return (fibo(n-1) + fibo(n-2));
    }
   
}