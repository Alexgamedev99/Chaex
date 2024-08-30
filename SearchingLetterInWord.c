/*
You are conducting a linguistic study and are interested in finding words that contain the letter 't' or 'T' in the first half of the word (including the middle letter if there is one). Specifically, if the first half of the word does contain a 't' or a 'T', your program should output a 1. If the first half does not contain the letter 't' or 'T', but the second half does, then your program should output a 2. Otherwise, if there is no 't' or 'T' in the word at all, your program's output should be -1. You may assume that the word entered does not have more than 50 letters.
*/
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
           printf("found\n");
       }
       else{
           printf("not found\n");
       }
         i++;
    }
   
    return 0;
}