#include <stdio.h>
#include <stdlib.h>
int* allocateIntArray(int);
double findAverage(int *,int);

int main(){
    int num, i;
    int * arr;
    double average;
    printf("How big array?\n");
    scanf("%d",&num);
    arr = allocateIntArray(num);
    printf("Enter grades %d\n", num);
    for(int i = 0; i < num;i++){
        scanf("%d", arr+i); //arr[i];
    }
    average = findAverage(arr,num);
    printf("avg %.2f", average);
    free(arr);
    return 0;
}
int* allocateIntArray(int num){
    int * ptr = (int *) malloc(num * sizeof(int));
    return ptr;
}
double findAverage(int * arr, int num){
    double avg = 0.0;
    for(int i = 0; i < num; i++){
        avg += arr[i];
    }
    avg = avg / num;
    return avg;
}
