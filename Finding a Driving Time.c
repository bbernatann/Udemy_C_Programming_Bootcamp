#include<stdio.h>
#include<stdlib.h>
main(){
	
	int distance,speed,hours,minutes;
	float speedInMinutes;
	
	
	printf("Enter the distance between cities(km):");
	scanf("%d",&distance);
	
	printf("Enter the speed of the car(km/h):");
	scanf("%d",&speed);
	
	hours=distance/speed;
	speedInMinutes=speed/60.0;
	minutes=(distance%speed)/speedInMinutes;
	
	printf("Intercity transportation time:%d hours and %d minutes",hours,minutes);
	
	return 0;
}


