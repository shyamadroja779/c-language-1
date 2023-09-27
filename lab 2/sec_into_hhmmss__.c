#include<stdio.h>
void main(){
	int sec,hr,min,ans;
	printf("enter value of sec:");
	scanf("%d",&sec);
		//printf("enter value of min");
		min=(sec/60);
	//("%f",&min);
	
		//printf("enter value of hr");
		hr=sec/3600;
	//scanf("%f",&hr);
	printf("your ans is %d: %d: %d" ,ans=hr%60,min%60,sec%60);
	
}
