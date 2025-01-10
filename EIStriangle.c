//Equiateral isosceles or scalene
#include<stdio.h>
int main()
{
	int a1,a2,a3;
	printf("Enter angles=");
	scanf("%d %d %d",&a1,&a2,&a3);
	if(a1+a2+a3==180)
	{
		if(a1==a2 && a2==a3 && a1==a3)
		{
			printf("it is an equilateral triangle");
		}
		else if(a1==a2||a1==a3||a2==a3)
		{
			printf("it is an isosceles triangle");
		}
		else
		{
			printf("it is a scalene triangle");
		}
	}
	else
	{
		printf("it is not a valid triangle");
	}
}
