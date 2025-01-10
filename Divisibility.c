//Divisibility by 5 and 11
#include<stdio.h>
int main()
{
	int n;
	printf("Enter n=");
	scanf("%d",&n);
	if(n%5==0 && n%11==0)
	{
		printf("n is divisible by 5 and 11");
	}
	else
	{
		printf("n is not divisible by 5 and 11");
	}
}
