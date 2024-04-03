#include <stdio.h>

int copmare(int x, int y, int z){
    if(x > y){
        if(x > z){
            return x;
        }
        else return z;
    }
    else if(x < y){
        if(y > z){
            return y;
        }
        else return z;
    }
}

int main(){
    int a, b, c;
    printf("Enter 1st number\n");
    scanf("%d",&a);
    printf("Enter 2nd number\n");
    scanf("%d",&b);
    printf("Enter 3rd number\n");
    scanf("%d",&c);
    printf("The largest number out of %d, %d and %d is %d\n", a, b, c, copmare(a, b, c));
}