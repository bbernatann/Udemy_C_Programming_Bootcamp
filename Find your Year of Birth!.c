#include<stdio.h>
main(){
	int current_year,age;
	
	printf("Please enter the current year:");
	scanf("%d",&current_year);
	
	printf("Please enter your age:");
	scanf("%d",&age);
	
	printf("\nYour year of birth:%d",current_year-age);
	
	return 0;
}
