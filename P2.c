//Maximum of three numbers
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter values of a,b and c=");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("a is the largest number");
	}
	else if(b>c)
	{
		printf("b is the largest number");
	}
	else
	{
		printf("c is the largest number");
	}
}
