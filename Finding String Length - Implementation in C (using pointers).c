#include<stdio.h>
#include<math.h>
main(){
	char word[100];
	int strlen=0;
	
	printf("Please enter a word:");
	scanf("%s",&word);
	
	char *ptr=word;
	
	while(*ptr!='\0'){
		strlen++;
		ptr++;
	}
	
	printf("The length of the word '%s' is %d",word,strlen);
	
	return 0;
}
