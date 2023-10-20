#include<stdio.h>
#include<stdlib.h>
main(){
	float num;
	
	printf("Please enter decimal number:");
	scanf("%f",&num);
	
	printf("The Integer Part= %d\n",(int)num);
	
	printf("The Decimal Part= %.2f",num-(int)num);
	
	return 0;
}
