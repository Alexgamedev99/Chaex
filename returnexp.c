#include <stdio.h>
char* can_enter_club(int);
int main(){
    int age = 0;
    scanf("%d", &age);
    printf("%s\n", can_enter_club(age));
    return 0;
}

char* can_enter_club(int age){
    return age >= 21 ? "Yes" : "No";
}

char* is_pass_or_fail(int score){
    return score >= 50 ? "Pass" : "Fail";
}