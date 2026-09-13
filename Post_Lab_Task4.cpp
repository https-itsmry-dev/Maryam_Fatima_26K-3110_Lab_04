#include<stdio.h>
int main()
{
	float length, width, area, perimeter;
	printf(" This is a program written in C to calculate the area and perimeter of a rectangle");
	printf("\n ================================================================================");
	printf("\n Enter the length of the rectangle: ");
	scanf("%f", &length);
	printf(" The length of the rectangle is: %.3f", length);
	printf("\n\n Enter the width of the rectangle: ");
	scanf("%f", &width);
	printf(" The width of the rectangle is: %.3f", width);
	area = length*width;
	perimeter= length+length+width+width;
	printf("\n\n The area of the rectangle is: %.3f", area);
	printf("\n The perimeter of the rectangle is: %.3f", perimeter);
	return 0;	
}

