#include<stdio.h>
void main(){
	float sec,hr,min,ans;
	printf("enter value of sec:");
	scanf("%f",&sec);
		//printf("enter value of min");
		min=(sec/60);
	//("%f",&min);
	
		//printf("enter value of hr");
		hr=sec/3600;
	//scanf("%f",&hr);
	printf("your ans is %f: %f: %f",ans=hr,min,sec);
	
}
