#include<stdio.h>
void main()
{
	float w1,w2,p,av;
	printf("Enter weight1=");
	scanf("%f",&w1);
	printf("Enter weight2=");
	scanf("%f",&w2);
	printf("Enter no of purchase=");
	scanf("%f",&p);
	av=(w1+w2)/p;
	printf("Average=%f",av);
}
