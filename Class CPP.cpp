//Class 

#include<iostream>
using namespace std;

class Student{
	public:
		int id;
		string name;
		
		void get_details(){
			
			cout<<"id:"<<id;
			cout<<"\nname:"<<name;
			
		}
};

int main(){
	
	Student s1;
	
	s1.id = 1;
	s1.name = "std";
	
	s1.get_details();
	
	return 0;
	
}

	
	

