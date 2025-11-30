// Q5) Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest. 

//solution Q5(Hardcoded Values)

#include <stdio.h>

int main(){
    float p = 2100;
    float r = 12;
    float t = 2;

    float SI;
    SI=(p*r*t)/100;
    printf("hence the required Simple Interest is %.2f", SI);
    return 0;
} 


//solution Q5(User Input)

/* #include <stdio.h>

int main(){
    float principal, rateofintetest, time, SimpleInterest;
    printf("Enter principal amount:\n ");
    scanf("%f", &principal);

    printf("Enter rate of interest:\n ");
    scanf("%f", &rateofintetest);

    printf("Enter time period:\n ");
    scanf("%f", &time);
    
    SimpleInterest=(principal*rateofintetest*time)/100;
    printf("Hence the SimpleInterest obtained is:\n %.2f", SimpleInterest);

    return 0;
}
*/

