//profit or loss
#include<stdio.h>
int main()
{
int CP,SP,P,L;
printf("Enter CP and SP=");
scanf("%d %d",&CP,&SP);
if(SP>CP)
{
	P=SP-CP;
	printf("Profit=%d",P);
}
else
{
	L=CP-SP;
	printf("Loss=%d",L);
}
}
