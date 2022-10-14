#include<stdio.h>

main(){
	
	int marks;
	
	printf("Enter Marks :- ");
	scanf("%d",&marks); // 60
	
	if(marks>100){
		
		printf("Enter valid Marks!");
		
	}
	else if(marks>=80){
		
		printf("Grade A");
	}
	else if(marks>=60){
		
		printf("Grade B");
	}
	else if(marks>=40){    
		
		printf("Grade C");
	}
	else{
		
		printf("Grade D");
	}
	
	
}
