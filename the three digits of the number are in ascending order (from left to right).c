#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	int num;
	int units,tens,hundreds;
	
	printf("Enter a 3-digit number:");
	scanf("%d",&num);
	
	hundreds=num/100;
	tens=(num/10)%10;
	units=num%10;
	
	if(hundreds<tens && tens<units){
		printf("ASCENDING");
	}else{
		printf("NOT ASCENDING");
	}
	
	return 0;
}
