#include<stdio.h>
void main(){
	int no,sum=0,count=0;
	float avg;
	while(no!=0)
	{
	printf("enter the no");
	scanf("%d",&no);
	sum=sum+no;
	count=count+1;
	
printf("sum is %d",sum);
printf("\n");


}
 avg=sum/count;
//printf("sum is %d",count);
printf("avg is %f",avg);



}
