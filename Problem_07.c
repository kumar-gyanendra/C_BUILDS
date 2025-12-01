/* 
Q7) Quick Quiz: Write a program to find grade of a student given his marks based on below: 
90 – 100 => A 
80 – 90 => B 
70 – 80 => C 
60 – 70 => D 
50 – 60 => E 
<50 => F 
 */

//Solution1
// Drawback: No input validation — values outside 0–100 still get a grade.

/* #include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks obtained:\n ");
    scanf("%d", &marks);

    if (marks>=90 && marks<=100){
        printf("YOUR HAVE OBTAINED 'A' GRADE");;
    }else if (marks>=80 && marks<90){
        printf("YOUR HAVE OBTAINED 'B' GRADE");
    }else if (marks>=70 && marks<80){
        printf("YOUR HAVE OBTAINED 'C' GRADE");
    }else if (marks>=60 && marks<70){
        printf("YOUR HAVE OBTAINED 'D' GRADE");
    }else if (marks>=50 && marks<60){
        printf("YOUR HAVE OBTAINED 'E' GRADE");
    } else 
        printf("YOU HAVE OBTAINED 'F' GRADE"); 
        
    return 0;
    }  */


//Solution2
// Drawback resolved: input is now validated, so marks outside 0–100 no longer get a grade.

#include <stdio.h>

int main(){
    char grade;
    int marks;
    printf("ENTER YOUR MARKS OBTAINED:\n");
    scanf("%d", &marks);

     if (marks < 0 || marks > 100) 
    {
        printf("you have entered inavlid number");
     return 0;
    }
   

    switch (marks/10){  
    case 10:                 //remember-when you will divide by 10 the decimal part will be discarded and only the integer part will be evaluated
    case 9: //FOR MARKS BETWEEN 90-99
        grade = 'A';
        break;
    
    case 8: // FOR MARKS BETWEEN 80-89
       grade = 'B';
       break;

    case 7: // FOR MARKS BETWEEN 70-79
       grade = 'C';
       break;

    case 6:  // FOR MARKS BETWEEN 60-69
       grade = 'D';
       break;

    case 5:  // FOR MARKS BETWEEN 50-59
       grade = 'E';
       break;

    case 4:
    case 3:
    case 2:           //IN THIS WAY WE CAN USE ONE RESULT FOR MULTIPLE CASES.
    case 1:
    case 0:
       grade = 'F';
       break;
    }

    printf("YOU HAVE OBTAINED %c GRADE", grade);
    return 0; 
   // HUMNE ABHI TOP PE (explicit range check) KAR LIYA H. JISKE KARAN HUME DEFAULT ABHI LIKNE KE NEED NHI H. HUMNE SURU MEI HI DEFINE KAAR DIYA H KI VALUE KANHA INVALID H.
   //EVEN IF WE ALREADY USED CASES 0–4 FOR GRADE 'F', WE CAN STILL ADD A DEFAULT BECAUSE DEFAULT IS NOT A CASE LABEL — IT ONLY CATCHES VALUES THAT DO NOT MATCH ANY CASE. IT IS NOT A DUPLICATE.

}
