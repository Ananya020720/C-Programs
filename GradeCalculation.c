#include <stdio.h>


int main()
{
    int marks;
    char grade;

    printf("Enter marks: ");
    scanf("%d", &marks);
    if(marks<=100)
    {
       if(marks >= 85)
       {
        grade = 'A';
       }
       else if(marks >= 70 && marks < 85)
       {
        grade = 'B';
       }
       else if(marks >= 55 && marks < 70)
       {
        grade = 'C';
       }
       else if(marks >= 40 && marks < 55)
       {
        grade = 'D';
       }
       else
       {
        grade = 'F';
       }
       printf("Your grade is %c", grade);
    }
    else
        printf("Please enter the valid mark(i.e in the range 0 to 100)\n");
    return 0;
}
