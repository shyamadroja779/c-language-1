#include<stdio.h>
void main(){
	int n,i=1,count;
	while(i<=10){
	scanf("%d",&n);
	if(n%2==0)
	    count++;
	    i++;
    }
    printf("%d\n",count);
    printf("%d\n",10-count);
    
}
