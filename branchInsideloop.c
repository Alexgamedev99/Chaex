/*
You want to determine the number of cities in a given region that have a population strictly greater than 10,000. To do this, you write a program that first reads the number of cities in a region as an integer, and then the populations for each city one by one (also integers).
*/
#include <stdio.h>

int main()
{
   
    int Population = 0;
    
    int NumberOfCities = 0;
    scanf("%d", &NumberOfCities);
    int Morethan = 0;
    if(NumberOfCities > 0){
        for(int i = 0; i < NumberOfCities; i++){
            scanf("%d", &Population);
                if(Population > 10000){
                   Morethan++;
                }
        }   
        printf("%d", Morethan);
    }
    
    
   
    return 0;
}