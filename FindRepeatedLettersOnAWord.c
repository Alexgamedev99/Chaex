/*
You are still conducting linguistic research! This time, you'd like to write a program to find out how many letters occur multiple times in a given word. Your program should read a word from the input and then sort the letters of the word alphabetically (by their ASCII codes). Next, your program should iterate through the letters of the word and compare each letter with the one following it. If these equal each other, you increase a counter by 1, making sure to then skip ahead far enough so that letters that occur more than twice are not counted again. You may assume that the word you read from the input has no more than 50 letters, and that the word is all lowercase.
*/
#include <stdio.h>

int main()
{
    char list[51];
    
    scanf("%s",list);
    int l = 0;
    while(list[l] != '\0'){
        l++;
    }
    for(int j = 0; j < l-1;j++){
        for(int i = 0; i < l-1; i++){
            if(list[i] > list[i+1]){
                int swap = list[i];
                list[i] = list[i+1];
                list[i+1] = swap;
            }
                
        }
    }
    int NumberRepeat = 0;
    for(int i = 0; i < l;i++){
        if(list[i] == list[i+1]){
            NumberRepeat++;
            if(list[i+1] == list[i+2]){
                NumberRepeat--;
            }
        }
               
    }
    
    printf("%d", NumberRepeat);
    return 0;
}