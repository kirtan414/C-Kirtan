#include<stdio.h>
#include<string.h>

main(){
	
	FILE *p;
	
	char ch[100];
	int i;
	
	p = fopen("Demo.txt","w");
//	p = fopen("D:\\New folder\\Demo.txt","w");
	
	if(p == NULL){
		
		printf("error");
	}
	else{
		
		printf("Enter Text : ");
		gets(ch);
		
		for(i=0 ; i<strlen(ch) ; i++){
			
		// h e l l o
		// 0 1 2 3 4 
			fputc(ch[i],p);
		}
		fclose(p);
		
	}
	
}
