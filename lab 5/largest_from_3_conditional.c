#include<stdio.h>
void main(){

int a,b,c;
int largest;
printf("enter the three no");
scanf("%d %d %d",&a,&b,&c);
largest = a>b?(a>c?a:c):(b>c?b:c);
printf(" your biggest no is %d",largest);
}

