//Function

#include<iostream>
using namespace std;

int add(int x,int y){
	return x+y;
}

double add(double x,double y){
	return x+y;
	
}

int main(){
	cout<<"Add int:"<<add(5,10)<<"\n";  //invoke int method 
	cout<<"Add double:"<<add(3.59,4.5);   // invoke double method
	return 0;
	
	
}
