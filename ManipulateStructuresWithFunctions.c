 
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
struct date advanceDay(struct date tom)
{
    int DayMonth = 0;
    switch (tom.month){
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
    if(tom.day >= 31 && tom.month >= 12){
        tom.day = 1;
        tom.month = 1;
        tom.year += 1;
    }
    else if(tom.month == 2 && tom.day >= 28){
        tom.day = 1;
        tom.month++;
    }
    else if(DayMonth == 1 && tom.day >= 31){
        tom.day = 1;
        tom.month++;
    }
    else if(DayMonth == 0 && tom.day >= 30){
        tom.day = 1;
        tom.month++;
    }
    else{
        tom.day++;
    }
   return tom;
}

