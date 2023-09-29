#include<stdio.h>
void main()
{
	int a;
	printf("Enter A=");
	scanf("%d",&a);
	if(a>0)
	{
		printf("A is Positive");
	}
	else if(a<0)
	{
		printf("A is Negative");
	}
	else
	{
		printf("A is Zero");
	}
}
