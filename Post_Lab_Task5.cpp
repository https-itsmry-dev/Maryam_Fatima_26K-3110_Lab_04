#include<stdio.h>
int main()
{
	int num, square, cube; // Enter an integer number
	printf(" This is a program written in C to calculate the square and cube of an integer");
	printf("\n ===========================================================================");
	printf("\n Enter the integer you want to calculate the sqaure and cube of: ");
	scanf("%d", &num);
	printf("\n The integer entered by the user is: %d", num);
	square = num*num;
    cube = num*num*num;
    printf("\n The square of the integer entered by the user is: %d", square);
    printf("\n The cube of the integer entered by the user is: %d", cube);
    return 0;    
}

