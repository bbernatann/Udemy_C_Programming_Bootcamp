#include<stdio.h>
#include<math.h>
main(){
	int midtermGrade,finalGrade;
	double averageGrade;
	
	printf("Midterm Grade:");
	scanf("%d",&midtermGrade);
	
	printf("Final Grade:");
	scanf("%d",&finalGrade);
	
	averageGrade=(midtermGrade*0.4)+(finalGrade*0.6);
	
	printf("Average Grade:%.2f",averageGrade);
	
	return 0;
}
