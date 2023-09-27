#include<stdio.h>
void main()
{
	float principle,rate,time_period,simple_interest;
	printf("enter the value of principle:");
	scanf("%f",&principle);
	printf("enter the value of rate");
	scanf("%f",&rate);
	printf("enter the value of time period:");
	scanf("%f",&time_period);
	printf("your simple interest= %f",simple_interest=(principle*rate*time_period)/100);
}
