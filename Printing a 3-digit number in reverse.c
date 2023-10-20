#include<stdio.h>
#include<stdlib.h>
main(){
	int num,reverseNum;
	int units,tens,hundreds;
	
	printf("Enter a 3-digit number:");
	scanf("%d",&num);
	
	hundreds=num/100;
	tens=(num/10)%10;
	units=num%10;
	
	reverseNum=hundreds+tens*10+units*100;
	
	printf("Reverse Num:%d",reverseNum);
	
	return 0;
}
