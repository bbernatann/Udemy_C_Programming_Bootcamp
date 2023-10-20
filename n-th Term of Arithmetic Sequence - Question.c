#include<stdio.h>
#include<math.h>
//an=a1+(n-1)*d  d=difference between consecutive element(ardýþýk eleman arasýndaki fark)

main(){
	
	int a1,d,an,n;
	
	printf("Enter the Initial Term:");
	scanf("%d",&a1);
	
	printf("Enter the difference in the Arithmetic Sequence:");
	scanf("%d",&d);
	
	printf("Enter the number of elements in the Arithmetic Sequence:");
	scanf("%d",&n);
	
	an=a1+(n-1)*d;
	
	printf("an=%d",an);
	
	return 0;
}
