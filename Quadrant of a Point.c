#include<stdio.h>
#include<stdlib.h>
main(){
	int x,y;
	
	printf("Enter a X:");
	scanf("%d",&x);
	
	printf("Enter a Y:");
	scanf("%d",&y);
	
	if(x>0 && y>0){
		printf("QUADRANT 1");
	}else if(x<0 && y>0){
		printf("QUADRANT 2");
	}else if(x<0 && y<0){
		printf("QUADRANT 3");
	}else{
		printf("QUADRANT 4");
	}
		
	return 0;
}
