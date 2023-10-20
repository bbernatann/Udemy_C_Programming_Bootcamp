#include<stdio.h>
#include<stdlib.h>
main(){
	int num;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num>=10 && num<100){
		printf("Number is double-digit ");
	}else if(num>=100 && num<1000){
		printf("Number is triple-digit");
	}else{
		printf("Neither double or triple.");
	}
	
	return 0;
}
