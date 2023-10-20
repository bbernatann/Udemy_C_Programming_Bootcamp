#include<stdio.h>
#include<stdlib.h>
main(){
	int num1,num2,num3;
	
	printf("Enter a number1:");
	scanf("%d",&num1);
	
	printf("Enter a number2:");
	scanf("%d",&num2);
	
	printf("Enter a number3:");
	scanf("%d",&num3);
	
	if(num1==0 || num2==0 || num3==0){
		printf("Cannot divide by 0!");
	}else if((num1%num2==0 || num2%num1==0) && (num2%num3==0 || num3%num2==0) && (num1%num3==0 || num3%num1==0)){
    	printf("DIVISABLE NUMBERS!");
	}else{
		printf("NOT DIVISABLE NUMBERS!");
	}
	
	
	return 0;
}
