#include<stdio.h>
void main(){
 int a,b,c,biggest;
 printf("enter value a ");
 scanf("%d",&a);
 printf("enter value b ");
 scanf("%d",&b);
 printf("enter value c ");
 scanf("%d",&c);
 biggest=(a>b)?((a>c)?a:c):((b>c)?b:c);
 printf("biggest num %d",biggest);
}
