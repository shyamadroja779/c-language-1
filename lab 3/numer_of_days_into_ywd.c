#include<stdio.h>
void main(){
	int year,week,days,z;
	printf("enter numbers of days:");
	scanf("%d",&days);
	year=days/365;
	z=days%365;
	week=z/7;
	days=z%7;
	
	printf("your ans is %d: %d: %d",year,week,days);
	  
}
