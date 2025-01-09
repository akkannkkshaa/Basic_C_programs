#include<stdio.h>
int main()
{
	int age;
	printf("Enter age=");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You are an adult");
	}
	else if(age<=10)
	{
		printf("You are a kid");
	}
	else
	{
		printf("You are a teen");
	}
}
