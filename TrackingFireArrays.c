#include <stdio.h>
#include <stdlib.h>
int ** allocateIntStarArray(int);
int * allocateIntArray(int);
int main(){
    int length = 0, width = 0;
    scanf("%d", &length);
    scanf("%d", &width);
    int array[2] = {length,width};
    return 0;
}
int ** allocateIntStarArray(int num){
    int ** ptr = (int **) malloc(num * sizeof(int *));
    return ptr;
}
int * allocateIntArray(int num){
    int * ptr = (int *) malloc(num * sizeof(int));
    return ptr;
}