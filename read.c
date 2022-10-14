#include<stdio.h>

main(){
	
	FILE *p;
	
	char ch;

	
	p = fopen("Demo.txt","r");

	if(p == NULL){
		
		printf("error");
	}
	else{
		
		while(ch != EOF){
			
			ch = fgetc(p);
			
			printf("%c",ch);
		}
		fclose(p);
		
	}
}
