#include<stdio.h>
#include<stdlib.h>
main(){
	int x,y,z;
	int min,max;
	
	printf("Enter first num:");
	scanf("%d",&x);
	
	printf("Enter second num:");
	scanf("%d",&y);
	
	printf("Enter third num:");
	scanf("%d",&z);
	
	min=x;
	max=y;
	
	if(max<x){
		max=x;
	}
	if(max<z){
		max=z;
	}
	

	if(min>y){
		min=y;
	}
	if(min>z){
		min=z;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	}
	
	printf("MIN=%d\nMAX=%d",min,max);
	
	return 0;
}
