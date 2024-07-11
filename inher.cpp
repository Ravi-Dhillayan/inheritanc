#include<iostream>
using namespace std;

class animal{
	public:
	animal(){
		cout<<"All animal"<<endl;
	}
	void sound(){
		cout<<"hello word"<<endl;
		
	}
	void sound1(){
		cout<<"Dog is Barking .."<<endl;
		
	}
	void sound(int x){
		cout<<"Lion is Roor...."<<endl;
	}
 
};
int main(){
	 animal obj;
	 obj.sound();
	 obj.sound1();
	 obj.sound(1);
}
