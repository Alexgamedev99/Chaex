#include<stdio.h>
#include<stdlib.h>

int main(){
     int size = 5;
     int* arr = (int*) malloc(sizeof(size * sizeof(int)));
     for(int i = 0; i <= size;i++){
        arr[i] = i;
        printf("%d ",arr[i]);
     }
     size--;
     arr = (int*) malloc(sizeof(size * sizeof(int)));
     printf("\n");
    for(int i = 0; i <= size;i++){
         arr[i] = i;
        printf("%d ",arr[i]);
     }
     printf("\n");
    return 0;
}