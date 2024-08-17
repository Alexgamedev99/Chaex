/*
    Hacer una función que te calcule si la baraja es "Full House" o no. Si es full house tiene que haber 2 tipos de una carta y 3 de otra
    Si es full house devuleve 1, En el momento que una de las dos condiciones no se cumpla devuelve 0;
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <math.h>
int is_full_house(int c1, int c2, int c3, int c4, int c5);
int main(){
    int c1,c2,c3,c4,c5;
    scanf("%d %d %d %d %d",&c1,&c2,&c3,&c4,&c5);
    is_full_house(c1,c2,c3,c4,c5);
    return 0;
}
int is_full_house(int c1, int c2, int c3, int c4, int c5) {
    int count = 0;
    int hand[5] = {c1,c2,c3,c4,c5};
    for(int i = 0; i < 5; i++){
        for(int j= 0; j < 5; j++){
            if(hand[i] != hand[j+1]){
                count++;
            }
            else{
                count--;
            }
        }
    }
    if (count > 0 && count <= 7){
        printf("1\n");
        return 1;
    }
     printf("0\n");
    return 0;
}