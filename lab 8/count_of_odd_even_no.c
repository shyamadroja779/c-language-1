#include<stdio.h>
void main(){
int no,i=1,even_no=0,odd_no=0;
while(i<=10)
{
	
	printf(" enter the numbers");
	scanf("%d",&no);
if(no%2==0)
//printf("given no is even")
{
even_no=even_no+1;
i++;
}
else
{//printf("given no is odd");
odd_no=odd_no+1;
i++;

}
}
printf(" your even count is %d \n",even_no);
printf(" your odd count is %d \n",odd_no);
}


