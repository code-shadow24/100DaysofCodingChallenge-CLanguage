#include <stdio.h>

int Typecheck(int num){
    if(num%2 == 0){
        printf("The number entered is even.\n");
        return 0;
    }
    else if(num % 2 != 0){
        printf("The number entered is odd.\n");
        return 0;
    }
}

int main(){
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    Typecheck(x);
    return 0;
}