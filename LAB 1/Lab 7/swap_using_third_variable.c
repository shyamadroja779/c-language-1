#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter A=");
	scanf("%d",&a);
	printf("Enter B=");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("A=%d  B=%d",a,b);
}
