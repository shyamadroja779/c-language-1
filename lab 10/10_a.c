#include<stdio.h>
void main()
{
	int no,first_digit,last_digit,rev,r;
	printf("enter the no");
	scanf("%d",&no);
	last_digit=no%10;
	while(no!=0)
	{
	r=no%10;
	rev=rev*10+r;
	no=no/10;
	}
	first_digit=rev%10;
	printf("your ans is %d",first_digit+last_digit);
}
