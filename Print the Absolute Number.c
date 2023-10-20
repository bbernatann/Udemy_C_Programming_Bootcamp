#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int num;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	if(num>0){
		printf("\n|%d|=%d",num);
	}else if(num<0){
		printf("\n|%d|=%d",num,num*-1);
	}else{
		printf("\n|%d|=%d",num,num);
	}
	
	return 0;
}
