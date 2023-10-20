#include<stdio.h>
#include<stdlib.h>
main(){
	
	int totalHours;
	float salaryPerHours,salary;
	
	printf("Enter the number of  total hours you worked in the last month:");
	scanf("%d",&totalHours);
	
	printf("Enter your salary per hours:");
	scanf("%f",&salaryPerHours);
	
	salary=totalHours*salaryPerHours;
	
	printf("YOUR SALARY:%.2f",salary);
	
	return 0;
}
