#include<stdio.h>
void  main(){
	int no,rev=0,r,y,no2;
printf("enter the no");
scanf("%d",&no);
no=no%10;

{r=no%10;
rev=rev*10+r;
no2=no2/10;}

y=no+(no2);
printf("given ans is %d",y);


}
