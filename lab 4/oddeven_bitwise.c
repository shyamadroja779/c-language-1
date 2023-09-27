#include<stdio.h>
 void main()
 {
 	int integer;
 	printf("enter the integer");
	scanf("%d",&integer);
	 
   if((integer&1)==0)
   {printf("given no is even");
	   }
	   else
	   {
	   	printf("given no is odd");
		   }	
 }
