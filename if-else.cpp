#include<iostream>
using namespace std;

int main(){
	
	int age;
	cout<<"Enter your age :"<<endl;
	cin>>age;
  if (age>150  ||age<4){
  
      cout<<"Invalid age"<<endl;}
  
   else	if (age>=18){
		cout<<"You can vote";
	}
	else
	{
		cout<<"You cannot vote";
	}
	
	return 0;
}

