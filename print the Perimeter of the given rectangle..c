#include<stdio.h>
#include<math.h>
main(){
	
	double perimeter ,width,height;
	
	printf("\nPlease enter the width of the rectangle:");
	scanf("%lf",&width);
	
	printf("Please enter the height of the rectangle:");
	scanf("%lf",&height);
	
	perimeter =(width*2)+(height*2);
	
	printf("\nThe perimeter  of the rectangle is:%.2f",perimeter);
	
	return 0;
}
