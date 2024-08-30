/*
Your job is to find the length of the longest word in a text with no punctuation or special characters of any kind - only contains words. To do so, please write a C-program that takes as a input first the number of words in a text, followed by all of the words in the text. The output of your program should be the length of the longest word in the text.

To simplify your program, you can assume that the longest word will not exceed 100 characters.
*/
#include <stdio.h>

int main()
{
    int NumbOfWords = 0;
    scanf("%d",&NumbOfWords);
    char Word[101];
    int currentMax = 0, maxWords = 0;
    for(int i = 0; i < NumbOfWords; i++){
        scanf("%s",Word);
        currentMax = 0;
        int l = 0;
        while(Word[l] != '\0'){
            l++;
            currentMax++;
        }
        if(currentMax > maxWords){
            maxWords = currentMax;
        }
    }
    printf("%d",maxWords);
    return 0;
}