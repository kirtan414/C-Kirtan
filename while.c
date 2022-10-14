#include<stdio.h>

void main(){
	
	int a = 1;
	int N;
	
	printf("Enter Value : ");
	scanf("%d",&N);        
	        
	while(a<=10){
		
		printf("%d x %d = %d\n",N,a,a*N);
		
		a++;
	}
	
}
