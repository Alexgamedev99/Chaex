/*
Write a C-program that prints out a word as many times as specified. The number of repetitions and the word should be given as input to the program. You may assume that the word has no more than 100 characters (be sure to also reserve space for the null terminator, \0, though!).
*/
#include <stdio.h>

int main()
{
    int numberOfWords = 0;
    char words[101];

    scanf("%d %s",&numberOfWords ,words);
        for(int i = 0; i < numberOfWords; i++){
            printf("%s\n", words);
        }
    return 0;
}