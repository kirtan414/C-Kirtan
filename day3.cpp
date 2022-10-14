#include<iostream>

using namespace std;

class students{
	
	public:
	
		int id;
		string name;
	
};
main(){
	
	students obj1,obj2;
	
	cout<<"Enter id : ";
	cin>>obj1.id;
	
	cout<<"Enter Name : ";
	cin>>obj1.name;
	
	
	cout<<"Enter id : ";
	cin>>obj2.id;
	
	cout<<"Enter Name : ";
	cin>>obj2.name;
	
	cout<<obj1.id<<endl;
	cout<<obj1.name<<endl<<endl;
	
	cout<<obj2.id<<endl;
	cout<<obj2.name<<endl<<endl;
	

	
	
}
