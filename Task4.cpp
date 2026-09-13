#include<stdio.h>
main(){
	int age;
	printf("This program is written to check whether a person is elligible to vote or not?");
	printf("\n===============================================================================");
	printf("\nEnter the age of the person you want to check: ");
	scanf("%d", &age);
	printf("\nThe age of the person is: %d", age);
	if(age>18)
	{
	printf("\nThe person IS elligible to cast a vote.");	
	}
	else
	{
		printf("\nThe person is NOT elligible to cast a vote.");
	}
	return 0;
}
