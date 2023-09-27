#include<stdio.h>
void main(){
 int a;
 printf("enter value a ");
 scanf("%d",&a);
 (a%2==1)?((a>50)?printf("num is odd and greater than 50"):printf("num is not greater than 50")):printf("num is not odd");
}
