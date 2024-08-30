/*Create a program that displays on the screen a square of n x n stars, with the integer n given as an input.*/
#include <stdio.h>

int main()
{
    int number = 0;
    scanf("%d", &number);
    for(int i = 0; i < number; i++){
        
        for(int i = 0; i < number; i++){
            printf("*");
            
        }
        printf("\n");
    }
    return 0;
}