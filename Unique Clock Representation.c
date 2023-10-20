#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int totalSeconds;
	int hours,minutes,seconds;
	
	printf("Enter seconds:");
	scanf("%d",&totalSeconds);
	
	hours=totalSeconds/3600;
	minutes=(totalSeconds%3600)/60;
	seconds=(totalSeconds%3600)%60;
	
	
	if(hours<10){
		printf("0");
	}
	printf("%d : ",hours);
	
	if(minutes<10){
		printf("0");
	}
	printf("%d : ",minutes);
	
	if(seconds<10){
		printf("0");
	}
	printf("%d",seconds);
	
	return 0;
}
