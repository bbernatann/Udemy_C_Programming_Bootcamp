#include<stdio.h>
main(){
	int a=5,b=2;
	int temp;
	
	printf("a=%d\nb=%d\n",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("\na=%d\nb=%d\n",a,b);
	
	return 0;
}
