/* 1. Write a C program to calculate area of a rectangle: 
a. Using hard coded inputs. 
b. Using inputs supplied by the user.  */

//solution 1(a)

 #include <stdio.h>

int main(){
    int length = 5;
    int breadth = 21;
    printf("The area of rectangle is %d", length * breadth);
    return 0;
}


//solution 1(b)

/* #include <stdio.h>

 int main(){
    int length, breadth;
    printf("Enter the length of the Rectangle:\n ");
    scanf("%d", &length);

    printf("Enter the breadth of the rectangle:\n ");
    scanf("%d", &breadth);

    printf("The area of the Rectangle is %d", length * breadth);
    return 0;
}  */