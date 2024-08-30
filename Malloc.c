#include <stdio.h>
#include <stdlib.h>

int main(){

    //Reservar un espacio en memoria para un número de tipo float y luego guardar la dirección de memoria en un tipo "float*".
    float * size = (float*) malloc(sizeof(float));

    int * intptr;
    double * doubleptr;
    //reservo un espacio de memoria del tamaño "int"
    intptr = (int *) malloc(sizeof(int));
    //En ese espacio justo asigno el avlor de 8.
    * intptr = 8;
    doubleptr = (double *) malloc(sizeof(double));
    int b = 5;
    int * h = &b;
    //reservo memoria en el puntero "a" para un int.
    int * a =(int*) malloc(sizeof(int));
    //asigno el valor 1 a esa memoria
    *a = 1;
    printf("valor %d  direccion de memoria %p\n",*a,a);
    //vacío la memoria
    free(a);
    printf("valor %d  direccion de memoria %p\n",*a,a);

    //lo mismo que antes pero para los arrays.
    int * array = (int*) malloc(5*sizeof(int));
    for(int i = 0; i <= sizeof(array); i++){
        array[i] = 1;
        printf("%d\n", array[i]);
    }
    free(array);

    
    return 0;
}
