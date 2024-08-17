#include <stdio.h>
#include <string.h>
int is_palindrome(char* str);
int main(){
    char str[5] = "level";
    is_palindrome(str);
    return 0;
}

int is_palindrome(char* str) {
    int l = strlen(str);
    char cp[l];
    int c = l, k = 1;
    for(int i = -1; i < l; i++){
        cp[i] = str[c];
        c--;
    }
    int count = 0;
    while(count < l){
        if(str[count] != cp[count]){
            k = 0;
            printf("%d\n",k);
            return k;
        }
        count++;
    }
    printf("%d\n",k);
    return k;

}