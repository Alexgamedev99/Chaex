/*You are responsible for a rail convoy of goods consisting of several boxcars. You start the train and after a few minutes you realize that some boxcars are overloaded and weigh too heavily on the rails while others are dangerously light. So you decide to stop the train and spread the weight more evenly so that all the boxcars have exactly the same weight (without changing the total weight). For that you write a program which helps you in the distribution of the weight.

Your program should first read the number of cars to be weighed (integer) followed by the weights of the cars (doubles). Then your program should calculate and display how much weight to add or subtract from each car such that every car has the same weight. The total weight of all of the cars should not change. These additions and subtractions of weights should be displayed with one decimal place.

You may assume that there are no more than 50 boxcars. */

#include <stdio.h>

int main(){
    double boxCarts[50];
    for(int i = 0; i < 50; i++){
        boxCarts[i] = 0;
    }

    int numBox = 0;
    double maxWeight = 0;
    scanf("%d",&numBox);
    if(numBox <= 50){
        for(int i = 0; i < numBox; i++){
        double currentWeight = 0;
        scanf("%lf",&currentWeight);
        boxCarts[i] = currentWeight;
        maxWeight+= currentWeight;
        }
        double weightPerBox = maxWeight / numBox;
        
        for(int i = 0; i < numBox; i++){
        printf("%0.1lf\n",(weightPerBox - boxCarts[i]));
        }
    
    }
    
    else 
    {
        return 0;
    }
    
    


    return 0;
}

