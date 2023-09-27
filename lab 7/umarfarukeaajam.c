#include<stdio.h>
void main(){
	int a,b,ch;
	printf("enter number a,b");
	scanf("%d %d" ,&a,&b);
	scanf("%c ",ch);
	switch(ch)
	{
		case '+':
			printf("add is %d",a+b);
			break;
		case '-':
			printf("sub is %d",a-b);
			break;
		case '*':
			printf("mul is %d",a*b);
			break;
		case '/':
			printf("div is %d",a/b);
			break;
	}
}
