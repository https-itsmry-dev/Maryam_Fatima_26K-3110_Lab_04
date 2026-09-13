#include<stdio.h>
int main()
{
	int days;
	printf(" This is a program written in C for a Library that wants to check whether a student should pay fine or not?");
    printf("\n =========================================================================================================");
    printf("\n Enter the number of late days: ");
    scanf("%d", &days);
    printf("\n The number of late days entered by the user are: %d", days);
    printf("\n The student should pay: ");
    if (days==0)
    {
    	printf("\n No Fine");
	}
	else if (days<=5)
	{
		printf("\n Fine of: Rs. 50");
	}
    else if (days<=10)
    {
    printf("\n Fine of: Rs. 100");
	}
	else 
	{
		printf("\n Fine of: Rs. 200");
	}
	return 0;
}
