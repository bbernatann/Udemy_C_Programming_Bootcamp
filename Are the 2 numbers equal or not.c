#include<stdio.h>
#include<stdlib.h>
main(){
	
	int num1,num2;
	
	printf("Enter num1:");
	scanf("%d",&num1);

    printf("Enter num2:");
	scanf("%d",&num2);	
	
	if(num1==num2){
		printf("EQUAL");
	}else{
		printf("NOT EQUAL");
	}
	
	
	return 0;
}
