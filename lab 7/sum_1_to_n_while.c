#include<stdio.h>
void main(){
	int n,i=1,sum;
	printf("enter no");
	scanf("%d",&n);
	while(i<=n){
		sum=((n)*(n+1))/2;
		i++;
	}
	printf(" your sum is %d",sum);
}
