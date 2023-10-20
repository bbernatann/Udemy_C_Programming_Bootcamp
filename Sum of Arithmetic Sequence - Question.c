#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//Sn=(a1+an)*(n/2)-->

main(){
	
	float a1,n,an,d,Sn;
	 ;
	
	printf("Enter the Initial Term:");
	scanf("%f",&a1);
	
	printf("Enter the difference in the Arithmetic Sequence:");
	scanf("%f",&d);
	
	printf("Enter the number of elements in the Arithmetic Sequence:");
	scanf("%f",&n);
	
	an=a1+(n-1)*d;
	
	Sn=(a1+an)*(n/2);
	
	printf("\nSum of Arithmetic Sequence:%.0f",Sn);
	
	return 0;
}
