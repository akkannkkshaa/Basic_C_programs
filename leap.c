//Leap year or not
#include<stdio.h>
int main()
{
	int year;
	printf("Enter year=");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("It is a Leap year");
	}
	else
	{
		printf("It is not a Leap year");
	}
}
