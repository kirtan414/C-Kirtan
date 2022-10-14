#include<iostream>

using namespace std;

main(){
	
	char a[100] = "heLLo kIrTaN";
	int i;
	
	cout<<"Your String Before Toggle : "<<a<<endl;
	
	for(i=0 ; a[i] != '\0' ; i++){
		
		if(a[i]>='A' && a[i]<='Z'){
			
			a[i] = a[i] + 32;
		}
		else if(a[i]>='a' && a[i]<='z'){
			
			a[i] = a[i] - 32;
		}
		
	}
	
	cout<<"Your String After Toggle : "<<a;
	
}
