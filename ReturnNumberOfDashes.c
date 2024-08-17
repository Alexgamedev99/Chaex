#include <stdio.h>
#include <string.h>
char* convert_to_dashes(int);
int main(){
    int num = 0;
    scanf("%d",&num);
    convert_to_dashes(num);
    return 0;
}
char* convert_to_dashes(int num){
   char dash[100];
    for(int i = 0; i < num; i++){
        dash[i] = '-'; 
    }
    printf("%s\n", dash);
    return 0;

}

/*
char* convert_to_dashes(int num) {
    char string[100];
    int i;
    for (i=0;i<num;i++)
    {string[i]='-';}
    string[i] = '\0';
    return string;
}
*/