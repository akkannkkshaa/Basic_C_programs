//Nagative positive or zero
#include<stdio.h>
int main()
{
	int n;
	printf("Enter n=");
	scanf("%d",&n);
	if(n>0)
	{
		printf("n is a Positive number.");
	}
	else if(n<0)
	{
		printf("n is a Negative number.");
	}
	else
	{
		printf("n is Zero");
	}
}
