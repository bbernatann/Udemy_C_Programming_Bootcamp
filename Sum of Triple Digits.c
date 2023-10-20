#include<stdlib.h>
#include<stdio.h>
main(){
	int num;
	int units,tens,hundreds;
	
	printf("Enter a 3-digit number:");
	scanf("%d",&num);
	
	units=num%10;
	tens=((num%100)-units)/10;  //(num/10)%10
	hundreds=num/100;
	
	printf("\nhundreds=%d\n",hundreds);
	printf("tens=%d\n",tens);
	printf("units=%d\n",units);


	printf("\nSum of triple digits=%d\n",units+tens+hundreds);
	
	return 0;
}
