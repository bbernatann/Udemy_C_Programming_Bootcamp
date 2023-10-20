#include<stdio.h>
#include<stdlib.h>
main(){
	char grade;
	
	printf("Enter your grade(A-F):");
	scanf("%c",&grade);
	
	switch(grade){
		case 'A':
			printf("Grade between 90-100 \n");
			break;
		case 'B':
			printf("Grade between 80-89 \n");
			break;
		case 'C':
		    printf("Grade between 70-79 \n");
			break;	
		case 'D':
			printf("Grade between 60-69 \n");
			break;
		case 'E':
			printf("Grade between 50-59 \n");
			break;
		case 'F':
			printf("Grade between 0-49 \n");
			break;
		default:
			printf("WRONG NOTE ENTRY");
	}
	
	return 0;
}
