#include<stdio.h>
int main()
{
float Marks;
printf("\n This program is used to print what grade the student has attained");
printf("\n======================================================================");
printf("\nEnter the marks obtained by the student: ");
scanf("%f", &Marks);
printf("\nThe marks obtained by the students are: %f", Marks);
if (Marks >= 80)
{
	printf("\nThe Grade attained by the student is: A");
}
else if (Marks >= 60)
{
	printf("\nThe Grade attained by the student is: B");
}
else
{
	printf("\n The Grade attained by the student is: C");
}
return 0;
}
