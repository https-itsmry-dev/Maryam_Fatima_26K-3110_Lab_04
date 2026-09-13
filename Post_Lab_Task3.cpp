#include<stdio.h>
int main()
{
char gender;
char student_name [50];
printf("This program is written in C to demonstrate the difference between taking a complete line of text and a single character.");
//taking a character as input and printing it
printf("\n======Taking a single character and printing it======");
printf("\n Enter the gender of the student: ");
scanf("%c", &gender);
printf("\n The gender of the student is [F/M]: %c", gender);
getchar();// using getchar() so that it consumes the Enter key pressed during scanf so fgets() doesn't get skipped.
// taking a string as input and printing it
printf("\n We will now use fgets() to input the Student's full name: ");
fgets (student_name, 50, stdin);
puts("\nStudent name is: ");
puts(student_name);
return 0;
}

