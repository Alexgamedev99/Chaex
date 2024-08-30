/*
Write a function isReverse() that checks whether a given word is the reverse of another given word. More precisely, the function should take as inputs two words (null-terminated arrays of characters) and return an integer. If indeed the second word is the reverse of the first then the function should return the integer 1, otherwise it should return a 0.

Your main() function should read two words from the user input (you can assume that neither word has more than 99 characters) and then call the function isReverse, passing both words to this function. The function should return an integer as described above and your main program needs to print out a sentence, indicating whether indeed, the first word is the reverse of the second word (see below examples).

Note: The name of the function needs to be isReverse.
*/

#include <stdio.h>
#include <string.h>
int isReverse(char*,char*);
int main()
{
    char word1[99], word2[99];
    scanf("%s %s",word1,word2);
    isReverse(word1,word2);
    return 0;
}
int isReverse(char* word1,char* word2){
    int a = strlen(word1);
    int b = strlen(word2);
    if(a != b){
        printf("%s is not the reverse of %s",word1,word2);
        return 0;
    }
    else{
        int count = 0;
        while(word1[count] != '\0'){
            if(*(word1+count) != *(word2+(b-1))){
                printf("%s is not the reverse of %s",word1,word2);
                return 0;
            }
            count++;
            b--;
        }
    }
    printf("%s is  the reverse of %s",word1,word2);
    return 1;
}