#include<stdio.h>
int main() 
{
	float celsius, fahrenheit;
	printf(" This is a program written in C to convert the temperature entered by the user from Celsius to Fahrenheit temp.");
	printf("\n =============================================================================================================");
	printf("\n Enter the Temperature you want to convert from Celsius to Fahrenheit: ");
	scanf("%f", &celsius);
	printf("\n The temperature entered by the user in Celsius is: %.2f", celsius);
	fahrenheit = (celsius*1.8)+32;
	printf("\n The temperature after conversion in Fahrenheit is: %.2f", fahrenheit);
	return 0;

}

