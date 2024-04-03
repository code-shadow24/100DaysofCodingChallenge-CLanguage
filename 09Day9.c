#include <stdio.h>

int leapYear(int year){
    if(year%100 == 00){
        if(year % 400 == 0){
            printf("%d is a leap year", year);
        }
        else{
            printf("%d is not a leap year", year);
        }
    }
    else if(year % 4 == 0){
        printf("%d is a leap year", year);
    }
    else{
        printf("%d is not a leap year", year);
    }
    return 0;
}

int main(){
    int y;
    printf("Enter a year to check if it is leap year or not\n");
    scanf("%d",&y);
    leapYear(y);
    return 0;
}