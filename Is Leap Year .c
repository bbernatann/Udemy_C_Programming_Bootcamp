#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int year;
	
	printf("Enter a year:");
	scanf("%d",&year);
	
	if(year%400==0){
		printf("%d year is a leap year!",year);
	}else if(year%100==0){
		printf("%d year is NOT a leap year!",year);
	}else if(year%4==0){
		printf("%d year is a leap year!",year);
	}else{
		printf("%d year is NOT a leap year!",year);
	}
	
	return 0;
}
