//alphabet or not
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter character=");
	scanf("%c",&ch);
	if(ch>='A'&&ch>='Z'||ch<='a'&&ch>='z')
	{
		printf("It is an alphabet");
	}
	else
	{
		printf("It is not an alphabet");
	}
}
