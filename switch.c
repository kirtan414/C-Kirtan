#include<stdio.h>

void main(){
	
	int a;

printf("1. Prepaid\n");
printf("2. Postpaid\n");

printf("Enter Your Selection : ");
scanf("%d",&a);

switch(a){
	
	case 1:
		
		printf("1. 499/- 1 year 5Gb/day\n");	
		printf("2. 899/- 2 year 5Gb/day\n");
		
		printf("Enter Your Selection : ");
		scanf("%d",&a);
			
		switch(a){
			
			case 1:
				
				printf("499/- 1 year 5Gb/day Done.\n");
				break;
				
			case 2:
				
				printf("899/- 2 year 5Gb/day Done.\n");
				break;
		}
		break;
	case 2:
	
		printf("Please try again Later.");
		
	}
		
}
