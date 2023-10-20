#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int num;
	
	printf("Please enter a number:");
	scanf("%d",&num);
	
	if(num%2==0){
		printf("The number %d is an EVEN number.",num);
	}else{
		printf("The number %d is an ODD number.",num);
	}
	
	return 0;
}
