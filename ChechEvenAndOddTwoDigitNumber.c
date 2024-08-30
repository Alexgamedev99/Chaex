#include <stdio.h>
int check_even_odd(int);
int main()
{
    check_even_odd(43);

    return 0;
}
int check_even_odd(int num) {
    int fn = 0, ln = 0;
    fn = num / 10;
    ln = num % 10;
   if(fn % 2 == 0 && ln % 2 !=0){
        return 1;
    }
    return 0;

    //return (num % 10 + num /10) % 2;
}