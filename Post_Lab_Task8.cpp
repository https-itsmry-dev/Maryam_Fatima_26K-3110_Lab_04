#include<stdio.h>
int main()
{
	float marks;
	printf(" This is a program written in C to check whether a student has passed an exam or not.");
	printf("\n ===================================================================================");
	printf("\n Enter the marks obtained by the student: ");
	scanf("%f", &marks);
	printf("\n The marks obtained by the student are: %.3f", marks);
	if (marks>=50)
	{
		printf("\n The student has PASSED the exam");
	}
	else
	{
		printf("\n The student has FAILED the exam");
	}
	return 0;
}


