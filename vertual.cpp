#include<iostream>
using namespace std;
	int a,b,c;
class A
{

	public:
		A(){
			cout<<"Hello word!"<<endl;
			c=a+b;
			
		}
		void show(){
			cout<<"Sum = "<<c;
		}
};
class B{
	public:
		B(){
				cout<<"Enter the two nubmer : "<<endl;
			cin>>a;
			cin>>b;
		
			c=a*b;
			cout<<endl<<"multiply = "<<c<<endl;
		}
};
class C : public A , virtual public B{
	public :
		C(){
		cout	<<"value of the C ="<<c<<endl;
		}
};
int main(){
	C oo;
//	B o;
	oo.show();
}
