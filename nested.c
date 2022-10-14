#include<stdio.h>

main(){
	
	int a = 100;
	int b = 56;
	int c = 89;
	
	
	if(a>b){
		
		if(a>c){
			
			printf("A is Max");
			
		}
		else{
			
			printf("C is Max");
		}
		
	}
	else{
		
		if(b>c){
			
			printf("B is Max");
		}
		else{
			
			printf("C is Max");
		}
	}
	
	
}
