#include<stdio.h>

int main(){
    
    int time;
    printf("Enter the current hour from 0 to 23\n");
    scanf("%d", &time);
    if(time >= 0 && time < 12){
        printf("Good Morning! Have a nice day ahead!\n");
    }
    else if(time >=12 && time < 16){
        printf("Good Afternoon! Hope you have had your lunch!\n");
    }
    else if(time>=16 && time < 20){
        printf("Good Evening! Don't forget to spend some time with yourself and your loved ones!\n");
    }
    else if(time>=20 && time <24){
        printf("Good Night! Go to bed on time and have a good sleep.\n");
    }
    else{
        printf("Please enter the valid time (0-24)\n");
    }
    return 0;
}