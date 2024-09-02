 
#include <stdio.h>
 
struct date {
        int year;
        int month;
        int day;
    };
 
/* function prototypes */
void printDate(struct date);
void readDate(struct date *date);
struct date advanceDay(struct date);
 
int main(void) {
    struct date today, tomorrow;
    readDate(&today);
    printDate(today);
    tomorrow = advanceDay(today);
    printDate(tomorrow);
    return 0;
}
void printDate(struct date date){
    printf("%.2d/%.2d/%d\n",date.month, date.day, date.year);
}
void readDate(struct date *date){
    scanf("%d %d %d",&date->year, &date->month, &date->day);
}
struct date advanceDay(struct date tomorrow)
{
    int DayMonth = 0;
    switch (tomorrow.month){
        case(1):
        case(3):
        case(5):
        case(7):
        case(8):
        case(10):
        case(12):
        DayMonth = 1;
        break;
    }
    if(tomorrow.day >= 31 && tomorrow.month >= 12){
        tomorrow.day = 1;
        tomorrow.month = 1;
        tomorrow.year += 1;
    }
    else if(tomorrow.month == 2 && tomorrow.day >= 28){
        tomorrow.day = 1;
        tomorrow.month++;
    }
    else if(DayMonth == 1 && tomorrow.day >= 31){
        tomorrow.day = 1;
        tomorrow.month++;
    }
    else if(DayMonth == 0 && tomorrow.day >= 30){
        tomorrow.day = 1;
        tomorrow.month++;
    }
    else{
        tomorrow.day++;
    }
   return tomorrow;
}

