//Constructor i CPP

#include<iostream>
using namespace std;

class Myclass{
	
	public:
		int a;
		int b;
		
		Myclass(int x, int y){
			a=x;
			b=y;
			
		}
		
		void print(){
			cout<<"The value of a is:"<<a;         //invoke the constructor
			cout<<"\nThe value of b is:"<<b;
		}
};

int main(){
	
	Myclass n1(10,20);
	
	n1.print();
	
	return 0;
	
}
