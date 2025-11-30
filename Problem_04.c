// Q4) Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit). 

 //solution Q4(Hardcoded Values)

/* #include <stdio.h>

int main(){
    float celcius = 32;
    float fahrenheit;
    printf("The converted valur of %f degree celcius in fahrenheit is %f", celcius, (9.0/5.0)*celcius +32.0);
    return 0;
} */

//solution Q4(User Input)

#include <stdio.h>

int main(){
    float celcius, fahrenhiet;
    printf("Enter the value in Celcius: ");
    scanf("%f", &celcius);

    fahrenhiet = (9.0/5.0)*celcius +32.0;
    printf("The converted value of %.2f degree celcius in fahrenhiet is %.2f", celcius, fahrenhiet);
    return 0;
}