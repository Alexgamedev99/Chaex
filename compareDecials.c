
/*
You arrive in front of a bridge that you must cross to reach a village before dark. Crossing the bridge is not free - the bridgekeeper asks you to roll two dice to determine the cost. You decide to write a program to verify that he is charging the right price.

Your program should read two integers, between 1 and 6, representing the values of each die. If the sum is greater than or equal to 10, then you must pay a special fee (36 coins). Otherwise, you pay twice the sum of the values of the two dice. Your program must then display the text "Special tax" or "Regular tax" followed by the amount you have to pay on the next line.
*/
#include <stdio.h>

int main()
{
    int dice1 = 0, dice2 = 0;
    scanf("%d %d",&dice1, &dice2);
    if(dice1 >= 1 && dice1 <= 6 && dice2 >= 1 && dice2 <= 6){
        int diceResult = dice1 + dice2;
        int price = diceResult * 2;
        if(diceResult >= 10){
            price = 36;
            printf("special tax\n%d", price);
        }
        else{
            printf("regular tax\n%d", price);
        }
    }
    else{
        printf("wrong numbers m8");
        return 0;
    }
    
    
    
    return 0;
}