#include<stdlib.h>
#include<stdlib.h>
main(){
	int grade;
	int totalGrade=0,i=0;
	
	printf("PLease enter your grades or '-1' to stop:");
	scanf("%d",&grade);
	
	while(grade != -1){
	    totalGrade=totalGrade+grade;
	    i++;
	    printf("PLease enter your grades or '-1' to stop:");
	    scanf("%d",&grade);
	    
	}
	
	printf("Avarage:%.2f",(float)totalGrade/i); 
	
	return 0;
}
