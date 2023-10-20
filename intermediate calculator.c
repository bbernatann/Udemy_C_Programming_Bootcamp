#include<stdio.h>
#include<stdlib.h>
main(){
	float num1,num2;
	char mathOperation;
	
	printf("Please choose math operation(+,-,/,*)-->");
	scanf("%c",&mathOperation);
	
	printf("Enter num1:");
	scanf("%f",&num1);
	
	printf("Enter num2:");
	scanf("%f",&num2);
	
	
	switch(mathOperation){
		case '+':
			printf("%.0f+%.0f=%.0f",num1,num2,num1+num2);
			break;
		case '-':
			printf("%.0f-%.0f=%.0f",num1,num2,num1-num2);
			break;
		case '*':
			printf("%.0f*%.0f=%.0f",num1,num2,num1*num2);
			break;
		case '/':
	        if(num2==0){
	        	printf("\nYou cannot divide by 0!");
			}else{
				printf("%.0f/%.0f=%.2f",num1,num2,num1/num2);
			}
		    break;
		
		default:
			printf("Wrong math operator!");
			break;
			
	}
	
	
	return 0;
}
