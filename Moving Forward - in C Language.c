#include<stdio.h>
#include<stdlib.h>
main(){
	
	int grade;
	
	printf("Enter your grade:");
	scanf("%d",&grade);
	
	if(grade>=80){
		printf("Well Done!");
	}else if(grade>=60){
		printf("Not Bad.");
	}else{
		printf("You didn't pass.");
	}
	
	return 0;
}
