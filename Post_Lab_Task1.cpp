#include<stdio.h>
int main(){
	float marks;
	int income;
	printf(" This is a program written in C to learn the application of Relational operators, Logical Operators and if-else Statement");
	printf("\n ========================================================================================================================");
	printf("\n Enter the Marks obtained by the student: ");
	scanf("%f", &marks);
	printf("\n The Marks obtained by the student are: %.3f", marks);
	printf("\n Enter the Family income: ");
	scanf("%d", &income);
	printf("\n The family income is: %d", income);
	if (marks>=80 || income<50000)
	{
		printf("\n The Student QUALIFIES for the scholarship.");
	}
	else
	{
		printf("\n The Student DOES NOT qualify for the scholarship");
	}
	return 0;
}


