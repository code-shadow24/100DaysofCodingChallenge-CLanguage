#include <stdio.h>

int main(){
    int a, x=0;
    printf("Enter a number\n");
    scanf("%d",&a);
    while(a!= 0){
        x = a%10;
        a = a/10;
        printf("%d",x);
    }
    return 0;
}