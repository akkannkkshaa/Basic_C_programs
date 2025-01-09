#include<stdio.h>
int main()
{
	float day,W,Y,D;
	printf("Enter no of days=");
	scanf("%f",&day);
	W=day/7;
	Y=day/365;
	D=day;
	printf("Years=%f Weeks=%f Days=%f",Y,W,D);
}
