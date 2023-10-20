#include<stdio.h>
#include<stdlib.h>
main(){
	int numberOfAsterisks,i;
	
	printf("Enter a number of asterisks you would like to see:");
	scanf("%d",&numberOfAsterisks);
	
	while(numberOfAsterisks>0){
		printf("*");
		numberOfAsterisks=numberOfAsterisks-1;
		i++;
	}

	return 0;
}
