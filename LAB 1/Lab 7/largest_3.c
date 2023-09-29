#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter A=");
	scanf("%d",&a);
	printf("Enter B=");
	scanf("%d",&b);
	printf("Enter C=");
	scanf("%d",&c);
	if(a>b && a>c)
	{
		printf("A is Largest");
	}
	else if(b>c && b>a)
	{
		printf("B is Largest");
	}
	else
	{
		printf("C is Largest",);
	}
}
