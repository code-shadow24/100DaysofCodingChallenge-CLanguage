#include <stdio.h>

float tempConversionToFahrenheit(float temp){
    float newTemp = (temp * 9/5) + 32;
    return newTemp;
}

float tempConversionToCelsius(float temp){
    float newTemp = (temp - 32) * 5/9;
    return newTemp;
}

int main(){
    int a;
    float temperature;
    printf("Enter 1 if you want to convert the temperature to Celsius\nEnter 2 if you want to convert the temperature to Fahrenheit\n");
    scanf("%d", &a);
    switch(a){
        case 1: 
            printf("Enter the temperature in Fahrenheit\n");
            scanf("%f", &temperature);
            printf("The temperature %f degrees F in Celsius is %f degrees C\n", temperature, tempConversionToCelsius(temperature));
            break;
        case 2: 
            printf("Enter the temperature in Celsius\n");
            scanf("%f", &temperature);
            printf("The temperature %f degrees C in Fahrenheit is %f degrees F\n", temperature, tempConversionToFahrenheit(temperature));
            break;
        default: printf("Enter the correct choice\n"); break;
    }

    return 0;
}