#include<stdio.h>

void main(){
	
	int a=78;
	int b=23;
	int c=36;
	int d=98;
	int e=100;
	
	a < b?
	
		(b<c)?
		
			(c<d)?
			
				(d<e)?
				
					printf("E is Max")
				:
					printf("D is Max")
			:
				(c<e)?
				
					printf("E is Max")
				:
					printf("D is Max")
		:
			
			(b<d)?
			
				(d<e)?
				
					printf("E is Max")
				:
					printf("D is Max")
						
			:
				
				(b<e)?
				
					printf("E is Max")
				:
					printf("B is Max")
	:
		(a<c)?
		
			(c<d)?
			
				(d<e)?
				
					printf("E is Max")
				:
					printf("D is Max")
					
					
					
			:
				(c<e)?
				
					printf("E is Max")
				:
					printf("D is Max")
		:
			
			(a<d)?
			
				(d<e)?
				
					printf("E is Max")
				:
					printf("D is Max")
			:
				
			(a<e)?
				
					printf("E is Max")
				:
					printf("A is Max");  
				
				
				
				
				
				
				
				
				
				
	
	
	
	
}
