#include<stdio.h>
#include<math.h>
main(){
	double area,width,height;
	
	printf("\nPlease enter the width of the rectangle:");
	scanf("%lf",&width);
	
	printf("Please enter the height of the rectangle:");
	scanf("%lf",&height);
	
	area=width*height;
	
	printf("\nThe area of the rectangle is:%.2f",area);
	
	return 0;
}
