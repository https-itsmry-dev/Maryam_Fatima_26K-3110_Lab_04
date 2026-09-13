#include<stdio.h>
int main(){
	int a;
	printf("This program is written to check whether the number given by the user is EVEN or ODD");
	printf("\n====================================================================================");
	printf("\nEnter the number you want to check: ");
	scanf("%d", &a);
	printf("The number entered by the user is: %d", a);
	if (a%2==0)
	{
		printf("\nThe number is EVEN");
	}
	else 
	{
		printf("\nThe number is ODD");
	}
	return 0;
	
}
