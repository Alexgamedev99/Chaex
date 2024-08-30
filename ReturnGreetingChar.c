#include <stdio.h>
#include <string.h>
char* greet(char*);
int main(void) {
    return 0;
}

char* greet(char* country) {
    if(strcmp("Spain",country) == 0){
        return "Hola";
    }
    else if(strcmp("France",country) == 0){
        return "Bonjour";
    }
     else if(strcmp("Germany",country) == 0){
        return "Hallo";
    }
    return "Hello";
    
}