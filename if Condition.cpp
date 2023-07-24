//Conditions

#include<iostream>
using namespace std;

int main(){
	
	int a = 300;
	int b = 30;
	int c = 50;
	
	
	if(a>b){
		
		if(a>c){      //nested if
			
			cout <<"A is the greatest";
		}
	}
	else{
		if(b>c){
			
			cout<<"B is the greatest";	
		}
		else{
			cout<<"C is the greatest";
		}
	}
	
	return 0;
}
