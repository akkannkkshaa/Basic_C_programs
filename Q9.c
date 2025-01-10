#include<stdio.h>
int main()
{
	int day,W,Y,D;
	printf("Enter no of days=");
	scanf("%d",&day);
	Y=day/365;
	W=(day%365)/7;
	D=(day%365)%7;
	printf("Years=%d \nWeeks=%d \nDays=%d",Y,W,D);
}
