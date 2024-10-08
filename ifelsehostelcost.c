/*
The hostel in which you plan to spend the night tonight offers very interesting rates, as long as you do not arrive too late. Housekeeping finishes preparing rooms by noon, and the sooner guests arrive after noon, the less they have to pay. You are trying to build a C program that calculates your price to pay based on your arrival time.

Your program will read an integer (between 0 and 12) indicating the number of hours past noon of your arrival. For example, 0 indicates a noon arrival, 1 a 1pm arrival, 12 a midnight arrival, etc. The base price is 10 dollars, and 5 dollars are added for every hour after noon. Thankfully the total is capped at 53 dollars, so you'll never have to pay more than that. Your program should print the price (an integer) you have to pay, given the input arrival time.
*/

#include <stdio.h>

int main()
{
    int pastnoon =0;
    int cost = 10;
    scanf("%d",&pastnoon);
    if(pastnoon < 0 || pastnoon > 12){
         printf("The number must be between 0 and 12");
        return 0;
    }
    else{
        int add = 5;
        cost = cost + (add * pastnoon);
        if(cost > 53){
            cost = 53;
        }
        printf("%d", cost);
    }
    
    
   
    return 0;
}