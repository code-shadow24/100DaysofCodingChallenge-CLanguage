#include <stdio.h>
int sum(int x, int y){
        c = x + y;
        return c;
    }
int main(){
    int a , b, c;
    c=0;
    printf("Enter the 1st number\n");
    scanf("%d", &a);
    printf("Enter the 2nd number\n");
    scanf("%d", &b);
    printf("The sum of %d and %d is %d", a, b, sum(a, b));

    return 0;
}