#include<stdio.h>
main(){
	int Total_Marks;
	float Obtained_Marks, Percentage;
	printf("\n\nThis program is written to take Obtained Marks, Total Marks from the user and give Percentage as the result");
	printf("\n================================================================================================================");
	printf("\nEnter the Obatined Marks achieved: ");
	scanf("%f", &Obtained_Marks);
	printf("The Obtained Marks entered by the user are:%f", Obtained_Marks );
	printf("\nEnter the Total Marks: ");
	scanf("%d", &Total_Marks);
	printf("The Total Marks entered by the user are: %d", Total_Marks );
	Percentage = Obtained_Marks/Total_Marks*100;
	printf("\nThe percentage obtained is: %f", Percentage);
	return 0;
	
}
