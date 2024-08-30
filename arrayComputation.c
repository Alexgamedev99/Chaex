/*
You plan to make a delicious meal and want to take the money you need to buy the ingredients. Fortunately you know in advance the price per pound of each ingredient as well as the exact amount you need. The program should read in the number of ingredients (up to a maximum of 10 ingredients), then for each ingredient the price per pound. Finally your program should read the weight necessary for the recipe (for each ingredient in the same order). Your program should calculate the total cost of these purchases, then display it with 6 decimal places.
*/

#include <stdio.h>

int main()
{
    double ppp[10];
    double weight[10];
    
    for(int i = 0; i < 10 ; i++){
        ppp[i] = 0;
        weight[i] = 0;
    }
    
    int num = 0;
    
    scanf("%d", &num);
    if(num >= 0 && num <= 10){
        for(int i = 0; i < num; i++){
        scanf("%lf", &ppp[i]);
        }
        for(int i = 0; i < num; i++){
        scanf("%lf", &weight[i]);
        }
        double totalPrice = 0;
        for(int i = 0; i < 10; i++){
        totalPrice+= (ppp[i] * weight[i]);
        }
    printf("%lf", totalPrice);
    }
   
    
    
    return 0;
}