#include<stdio.h>
#include<stdlib.h>
main(){
	
	int num1,num2;
	
	printf("Please enter num1:");
	scanf("%d",&num1);
	
	printf("Please enter num2:");
	scanf("%d",&num2);
	
	if(num1>num2){
		printf("\n%d>%d",num1,num2);
	}else{
		printf("\n%d<%d",num1,num2);
	}
	
	return 0;
}
