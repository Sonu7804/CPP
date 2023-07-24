////Inheritance in CPP
//
//                          //Single inheritance
//#include<iostream>
//using namespace std;
//
//class Dimensions{
//	public:
//		
//    float side = 10.67;
//    
//};
//class Square:public Dimensions{
//	
//	public:
//	
//	double area(double x){
//  
//    return(x*x);
//    
//	}	
//};
//
//int main(){
//	
//	Square s1;
//	cout<<"The Area is:"<<s1.area(s1.side);
//	
//	return 0;
//}






                        //Multilevel inheritance
                        
                        
                        

#include<iostream>
using namespace std;

class Grandparent{
	 public:
	 	
	 string name;
	 
	 void get_name(string n){
	 	name = n;
	 	
	 }
	 
	 void put_name(){
	 	cout<<"Name is:"<<name;
	 	
	 }
};

class Parent:public Grandparent{
	
	public:
		int age;
		
		void get_age(int a){
			
			age = a;
		}
		void pur_age(){
			
			cout<<"Age is:"<<age;
		}
};

class Childclass:public Parent{
	
	public:
	
	string gender;
	
	void get_gender(string g){
		
		gender = g;
		
		void put_gender(){
			
			cout<<"Gender is:"<<gender;
			
		}
	
};

int main(){
	
	child c;
	
	c.get_name("Sonu");
	c.get_age(21);
	c.get_gender("male");
	
	c.put_age();
	c.put_gender();
	c.put_name();
	
	return 0;
	
	
  }












