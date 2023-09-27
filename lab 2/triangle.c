 
	int year;
	float a,b,c;
	printf("enter sides a ");
	scanf("%f",&a);
	printf("enter sides a ");
	scanf("%f",&b);
	printf("enter sides a ");
	scanf("%f",&c);
	if((a==b)&&(b==c)){
	printf("triangle is equilateral");
    }
    else
	if((a==b)||(b==c)||(c==a))
    {
    	printf("triangle is isoceles");
	}
	else
	{
		printf("triangle is scalene");
	}
	
	
	
}
