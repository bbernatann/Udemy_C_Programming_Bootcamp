#include<stdio.h>
#include<stdlib.h>
main(){
	int num1,num2;
	
	printf("Enter a number1:");
	scanf("%d",&num1);
	
	printf("Enter a number2:");
	scanf("%d",&num2);
	
	if(num1==num2){
		printf("TRUE!");
	}else{
		printf("FALSE!");
	}
	
	return 0;
}
