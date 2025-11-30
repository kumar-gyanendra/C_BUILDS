// Q6) Write a program to check whether a number is divisible by 97 or not. 

// solution Q6(User Input)

#include <stdio.h>
 
 int main(){
    int a; 
    int b = 97;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("The value of remainder when a is divided by 97 is %d", a%b);
    return 0;
 }
