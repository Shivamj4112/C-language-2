#include<stdio.h>
#include<string.h>

main(){
	
	FILE *fp;
	int i;
	char ch[1000];
	
	fp = fopen("demo.txt","w");
	
	if(fp == NULL){
		
		printf("Error");
	}
	
	else{
		printf("Enter Text : ");
		gets(ch);
	
		
		for(i=0 ; i<strlen(ch) ; i++){
			
			fputc(ch[i],fp);
		}
		
		fclose(fp);
	}
}
