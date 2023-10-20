#include<stdio.h>
#include<stdlib.h>
main(){
	int num,totalPow;
	int result=1,pow;
	
	printf("Enter a number:");
	scanf("%d",&num);
	
	printf("Enter a power:");
	scanf("%d",&totalPow);
	pow=totalPow;
	
	while(totalPow>0){
		result=result*num;
		totalPow--;
	}
	
	printf("%d in the power of %d = %d",num,pow,result);
	
	return 0;
}
