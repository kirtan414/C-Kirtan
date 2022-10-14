#include<stdio.h>

struct Marks{
	
	int roll_no;
	char name[100];
	int chem_marks;
	int maths_marks;
	int phy_marks; 
	
	
};

main(){
	
	struct Marks s[5];
	
	int i,marks;
	double per,total;

	for(i=0 ; i<=2; i++){
		
		printf("Enter Roll Number : ");
		scanf("%d",&s[i].roll_no);
		
		printf("Enter Name : ");
		scanf("%s",&s[i].name);
		
		printf("Enter Chemistry : ");
		scanf("%d",&s[i].chem_marks);
		
		printf("Enter Mathematics  : ");
		scanf("%d",&s[i].maths_marks);
		
		printf("Enter Physics  : ");
		scanf("%d",&s[i].phy_marks);
	}
	
	for(i=0 ; i<=2 ; i++){
		
		printf("\n\nRoll Number : %d\n",s[i].roll_no);
		printf("Name : %s\n",s[i].name);
		printf("Chemistry : %d\n",s[i].chem_marks);
		printf("Mathematics : %d\n",s[i].maths_marks);
		printf("Physics : %d\n",s[i].phy_marks);
		
		marks = s[i].chem_marks + s[i].maths_marks + s[i].phy_marks;
		total = marks * 100;
		per = total / 300;		
		
		printf("Percentage :- %.14lf",per);
		
	}
	
	
	
	
	
	
}
