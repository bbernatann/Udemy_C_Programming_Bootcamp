#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	float num1,num2;
	
	printf("Please enter num1:");
	scanf("%f",&num1);
	
	printf("Please enter num2:");
	scanf("%f",&num2);
	
	if(num1>num2){
		printf("MAX=%.2f\nMIN=%.2f",num1,num2);
	}else{
		printf("MAX=%.2f\nMIN=%.2f",num2,num1);
	}
	
	return 0;
}
