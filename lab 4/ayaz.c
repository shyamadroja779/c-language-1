#include<stdio.h>
void main(){
	float a,b,ans;
	char c;
	printf("enter number a");
	scanf("%f",&a);
	printf("enter number b");
    scanf("%f",&b);
    printf("enter number c");
    scanf(" %c",&c);
	if(c=='+'){
	    ans=a+b;
	}
	else if(c=='-'){
		ans=a-b;
	}
	else if(c=='*'){
	    ans=a*b;
	}
	else if(c=='/'){
		ans=a/b;
	}
	else
	{
		printf("invalid");
	}
	printf("ans=%f",ans);
	
}
