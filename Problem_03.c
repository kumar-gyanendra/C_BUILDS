// Q3) Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.

//soution Q3A-(Hardcoded Values)

/* #include <stdio.h>

int main(){
    float radius = 5;
    printf("The area of the Circle with the mentioned radius is %f", (22.0/7.0)* radius * radius);
    return 0;

} */

// In line 9 if we write (22/7) then answer will not be accruate because in C,22/7 is INTEGER DIVISON,because both 22 and 7 are integers.
// In C 22/7= 3 not 3.142.
// So to take about exact answer make at least one of them a float or double i.e like 22.0 or 7.0


//solution Q3A-(User Input)

/* #include <stdio.h>

int main(){
    float radius;
    printf("Enter the value of radius of the circle:\n ");
    scanf("%f", &radius);

    printf("The area of the circle with mentioned radius is %f", (22.0/7.0)*radius*radius);
    return 0;
}
 */


 //solution Q3B-(Hardcoeded Values)

 /* #include <stdio.h>
 
 int main(){
    float radius = 5;
    float height = 6;
    printf("The volume of the cylinder with mentioned radius and height is %f", (22.0/7.0)*radius*radius*height);
    
    return 0;
 } */


 //solution Q3B-(User Input)

 #include <stdio.h>
 
 int main(){
    float radius, height; 
    printf("Enter the value of radius of cylinder:\n ");
    scanf("%f", &radius);
     printf("Enter the value of height of cylinder:\n ");
     scanf("%f", &height);

    printf("The volume of the cylinder with radius %f and height %f is %f", radius, height, (22.0/7.0)*radius*radius*height);
    return 0;
 } 
 