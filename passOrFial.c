#include <stdio.h>
char* is_pass_or_fail(int score);
int main(){
    int score = 0;
    scanf("%d", &score);
    printf("%s\n", is_pass_or_fail(score));
    return 0;
}


char* is_pass_or_fail(int score){
    return score >= 50 ? "Pass" : "Fail";
}