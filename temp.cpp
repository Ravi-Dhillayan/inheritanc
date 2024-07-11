#include<iostream>
using namespace std;
class one{
	public:
		void fun(){
			cout<<"It is a function :: "<<endl;
		}
};
class secound: public one{
	public:
		void fun1(){
			cout<<"It is a Secound function :: "<<endl;
		}
};
class third : public one{
	int n,r,s=0,f=1,i;
  public:
  	void foun2(){
  		cout<<"Enter the number where do you want fibonacci serives :: "<<endl;
  		cin>>n;
  		cout<<"Printed the Fibonacci serives : "<<endl;
  		for(i=0;i<n;i++){
  			cout<<s<<" "; // 0 1 1 2 3
  			r=s+f;// 1 2 3 5 8
  			s=f;  // 1 1 2 3 5
  			f=r;  //1  2 3 5 8
		  }
	  }
};
int main(){
	secound o1;
	third o2;
	o1.fun();
	o1.fun1();
	o2.fun();
	o2.foun2();
}
