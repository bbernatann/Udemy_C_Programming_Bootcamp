#include<stdio.h>
#include<stdlib.h>
main(){
	int totalSeconds,minutes,hours,seconds;
	
	
	printf("Please enter the second:");
	scanf("%d",&totalSeconds);
	
	hours=totalSeconds/3600;
	
	minutes=(totalSeconds-hours*3600)/60;
	
	seconds=(totalSeconds-hours*3600)%60;
	
	printf(" %d hour %d minutes %d seconds.",hours,minutes,seconds);
	
	return 0;
}
