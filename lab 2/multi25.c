#include<stdio.h>
void main(){
 int a;
 printf("enter value a ");
 scanf("%d",&a);
 (a%5==0)?printf("num is divisible by 5"):(a%2==0)?printf("num is divisible by 2"):printf("num is not divisible by 2,5");
}
