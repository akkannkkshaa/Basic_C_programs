#include<stdio.h>
int main()
{
	int EID;
	float S,hrs,amt;
	printf("Enter employee id=");
	scanf("%d",&EID);
	printf("Enter total work hours of a month=");
	scanf("%f",&hrs);
	printf("enter amount received per hour=");
	scanf("%f",&amt);
	S=hrs*amt;
	printf("Employee ID=%d \nSalary=%0.2f",EID,S);
}
