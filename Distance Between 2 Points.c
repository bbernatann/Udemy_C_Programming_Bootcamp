#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	float x1,x2,y1,y2;
	float distance;
	
	printf("Enter X1:");
	scanf("%f",&x1);
	
	printf("Enter X2:");
	scanf("%f",&x2);
	
	printf("Enter Y1:");
	scanf("%f",&y1);
	
	printf("Enter Y2:");
	scanf("%f",&y2);
	
	distance=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
	
	printf("Distance Between 2 Points:%.2f",distance);
	
	return 0;
}
