#include<stdio.h>

main(){
	
	FILE *fp;
	
	char ch;
	
	fp = fopen("demo.txt","r");
	
	if(fp == NULL){
		
		printf("Error");
	}
	
	else{
	
		while(ch!=EOF){
			
			ch = fgetc(fp);
			
			printf("%c",ch);
			
	
		}
		
		fclose(fp);
	}
}
