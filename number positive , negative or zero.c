#include<stdio.h>
#include<stdlib.h>
main(){
	int num;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num>0){
		printf("1");
	}else if(num==0){
		printf("0");
	}else{
		printf("-1");
	}
	
	return 0;
}
