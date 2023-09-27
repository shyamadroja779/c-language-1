#include<stdio.h>
void  main(){
	int n,flag=0,i=2;
	printf("enter the no");
	scanf("%d",&n);
	while(i<n)
	{
		if(n%i==0)
		{
		flag=1;
		break;
		}
		i++;
	}
	if(flag==1){
	printf("number is not prime");	
	}
	else{
		printf("number is prime");
	}
}

