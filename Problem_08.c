// Q8) Write a program to determine whether a student has passed or failed. To pass, a student requires a total of 40% and at least 33% in each subject. Assume there are three subjects and take the marks as input from the user.

//Solution1

/* #include <stdio.h>

int main(){
    float Sub1, Sub2, Sub3, totalmarks, maxsub1, maxsub2, maxsub3;
    printf("Enter maximum marks that can scored by student if scored full in all the three subject\n");
    scanf("%f", &totalmarks);
    printf("Enter maximum marks assigned for Subject 1\n");
    scanf("%f", &maxsub1);
    printf("Enter marks scored in Subject 1\n");
    scanf("%f", &Sub1);
    printf("Enter maximum marks assigned for Subject 2\n");
    scanf("%f", &maxsub2);
    printf("Enter marks scored in Subject 2\n");
    scanf("%f", &Sub2);
    printf("Enter maximum marks assigned for Subject 3\n");
    scanf("%f", &maxsub3);
    printf("Enter marks scored in Subject 3\n");
    scanf("%f", &Sub3);

    printf("The marks obtained in Subject 1 is %.2f, Subject 2 is %.2f, Subject 3 is %.2f\n\n", Sub1, Sub2, Sub3);

    float total_percentage = (((Sub1+Sub2+Sub3)/totalmarks)*100);
    float Sub1Percentage = 33.0/100*maxsub1;
    float sub2Percentage = 33.0/100*maxsub2;
    float sub3Percentage = 33.0/100*maxsub3;

    if (total_percentage>=40.0 && Sub1>=Sub1Percentage && Sub2>=sub2Percentage && Sub3>=sub3Percentage)
    {
        printf("Congratulation you have passed the examination\n");
    }
    else
       printf("You have failed and need to essential repeat\n");
    
    return 0;
} */

//Solution2

/*  #include <stdio.h>

int main(){
    float Sub1, Sub2, Sub3, totalmarks, maxsub1, maxsub2, maxsub3;
    printf("Enter maximum marks that can scored by student if scored full in all the three subject\n");
    scanf("%f", &totalmarks);
    printf("Enter maximum marks assigned for Subject 1\n");
    scanf("%f", &maxsub1);
    printf("Enter marks scored in Subject 1\n");
    scanf("%f", &Sub1);
    printf("Enter maximum marks assigned for Subject 2\n");
    scanf("%f", &maxsub2);
    printf("Enter marks scored in Subject 2\n");
    scanf("%f", &Sub2);
    printf("Enter maximum marks assigned for Subject 3\n");
    scanf("%f", &maxsub3);
    printf("Enter marks scored in Subject 3\n");
    scanf("%f", &Sub3);

    printf("The marks obtained in Subject 1 is %.2f, Subject 2 is %.2f, Subject 3 is %.2f\n\n", Sub1, Sub2, Sub3);

    float total_percentage = (((Sub1+Sub2+Sub3)/totalmarks)*100);
    float Sub1Percentage = 33.0/100*maxsub1;
    float sub2Percentage = 33.0/100*maxsub2;
    float sub3Percentage = 33.0/100*maxsub3;

    float scoredsub1percentage = (Sub1/maxsub1)*100;
    float scoredsub2percentage = (Sub2/maxsub2)*100;
    float scoredsub3percentage = (Sub3/maxsub3)*100;


    printf("Dear Student, You have Scored %.2f percentage of marks combined\n\n", total_percentage);
    printf("You have Scored %.2f percentage of marks in Subject 1\n", scoredsub1percentage);
    printf("You have Scored %.2f percentage of marks in Subject 2\n", scoredsub2percentage);
    printf("You have Scored %.2f percentage of marks in Subject 3\n", scoredsub3percentage);

    if (total_percentage>=40.0 && Sub1>=Sub1Percentage && Sub2>=sub2Percentage && Sub3>=sub3Percentage)
    {
        printf("Congratulation you have passed the examination\n");
    }
    else
       printf("You have failed and need to essential repeat\n");
    
    return 0;
}  */

// Drawback for solution 1 and 2: the program does not check if marks scored are greater than the maximum marks or less than zero.
//Advantages:
/* 
1) Allows different maximum marks for each subject, making it flexible for various exam patterns.
2) Calculates both total percentage and individual subject requirement, ensuring accurate pass/fail evaluation.
3) Supports decimal values because it uses float, allowing precise marks.
4) Shows marks clearly before showing the result, improving readability.
5) Simple, structured, and easy to understand for beginners 
*/

//Solution3

#include <stdio.h>
 
 int main(){
    int marks1, marks2, marks3;
    printf("Enter marks1: \n");
    scanf("%d", &marks1);        
    printf("Enter marks2: \n");
    scanf("%d", &marks2);
    printf("Enter marks3: \n");
    scanf("%d", &marks3);
    printf("The marks are %d %d and %d\n", marks1, marks2, marks3);

    if (marks1<33 || marks2<33 || marks3<33)                                  //here we have used if-else-if ladder(instead of using multiple if statement we can also use else if along with it thus forming an if-else if_else ladder)
    {
        printf("You are failed due to less marks in individual subjects\n");
    }
    else if ((marks1+marks2+marks3)/3 <40)                                    //(marks1 + marks2 + marks3) / 3 → This calculates the average marks (percentage if each subject is out of 100).here total marks is taken as 300. and < 40 → If this average is less than 40, then the student fails because of low overall percentage.
    {
        printf("You are failed due to less percentage\n");
    }
    else{
       printf("You are passed\n");
    }
    return 0;
 }

 // Drawbacks:
// 1. No input validation (negative or >100 marks allowed).
// 2. Assumes every subject is out of 100.
// 3. Average uses integer division, so accuracy is lost.


// Note: In the next version, I will write a code that fixes all these drawbacks by adding input validation, accurate percentage calculation, and improved logic.
