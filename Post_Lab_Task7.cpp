#include<stdio.h>
int main()
{
	int num1, num2, num3, sum, avg;
	printf(" This is a program written in C to calculate the average of three numbers entered by the user");
	printf("\n ==========================================================================================");
	printf("\n The FIRST number entered by the user is: ");
	scanf("%d", &num1);
	printf("\n The SECOND number entered by the user is: ");
	scanf("%d", &num2);
	printf("\n The THIRD number entered by the user is: ");
	scanf("%d", &num3);
	sum= num1+num2+num3;
	avg= sum/3;
	printf("\n The average of the numbers entered by the user is: %d", avg);
	return 0;
	
}

