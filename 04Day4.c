#include <stdio.h>

int factorial(int x){
    int a = 1;
    for(int i= x; i> 1; i--){
        a = a * i;

    }
    return a;
}

int main(){
    int b;
    printf("Enter the number you want the factorial of\n");
    scanf("%d", &b);
    printf("The factorial of %d is: %d",b, factorial(b));
    return 0;
}