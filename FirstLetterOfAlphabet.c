#include <stdio.h>

int main()
{
    char Word[51];
    scanf("%s",Word);
    int l = 0;
    while(Word[l] != '\0'){
        l++;
    }
    int Middlehalf = l / 2;
    int i = 0;
    while(Word[i] != '\0'){
       
       if(Word[i] == 't' ||  Word[i] == 'T'){
           
           if(i <= Middlehalf){
               printf("1");
               return 0;
           }
           else {
               printf("2");
               return 0;
           }
       }
      
         i++;
    }
          printf("-1\n");
           
       
   
    return 0;
}