#include<stdio.h>
void main()
{
	int a,b;
	char c; 
	printf("enter the value for a and b ");
	scanf("%d%d",&a,&b);
	printf("what you want?");
	printf("addition or substraction or multiplication or division \n");
	scanf(" %c",&c);
	
	switch(c){
	case '+':
		printf("sum of this to no is %d",a+b);
		break;
			case '-':
		printf("sum of this to no is %d",a-b);
		break;
			case '*':
		printf("sum of this to no is %d",a*b);
		break;
			case '/':
		printf("sum of this to no is %d",a/b);
		break; 
		default :
			printf("enter a void input");}
}
