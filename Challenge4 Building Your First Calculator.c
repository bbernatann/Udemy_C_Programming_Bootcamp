#include<stdio.h>
#include<math.h>
main(){
	float a,b;
	
	printf("Enter the first number:");
	scanf("%f",&a);
	
	printf("Enter the second number:");
	scanf("%f",&b);
	
	printf("\n%.0f+%.0f=%.0f",a,b,(a+b));
    printf("\n%.0f-%.0f=%.0f",a,b,(a-b));
	printf("\n%.0f*%.0f=%.0f",a,b,(a*b));
	printf("\n%.0f/%.0f=%.2f",a,b,(a/b));
	
	return 0;
}
