#include<iostream>
using namespace std;
class in{
	public:
	in(){
		cout<<"Hii your Welcome :"<<endl;
	}
};
class her:public in{
	public:
	her(){
		cout<<"This is a Single Inheritance ";
	}
};
int main(){
	her obj;
	
}
