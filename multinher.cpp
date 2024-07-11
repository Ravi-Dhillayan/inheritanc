#include<iostream>
using namespace std;
class A{
	int n,i,n1=0,ns=1,s;
	public:
	friend	void enter(A &o);
	friend 	void show(A o);
		
};
void enter(A &o) {
	cout<<"Enter the find the fibonacci Number :"<<endl;
	cin>>o.n;
	
}
void show(A o){
	cout<<"Your fibonacci Number :"<<endl;
	for(o.i=0;o.i<o.n;o.i++){
  cout<<o.n1<<endl;
  o.s=o.n1+o.ns;
  o.n1=o.ns;
  o.ns=o.s;
		
		
	}
}
 class D: public A{
 	public:
 	D(){
 	cout<<"fjlakfjglgj"<<endl;	
	 }
 	
 };
class B: public A
{
	public:
  void aa()	{
  	cout<<"hello world"<<endl;
  }
};
class c:public B{
	public:
	void ab(){
		cout<<"***Welcome **"<<endl;
	}
};
int main(){
    c o;
enter(o);
show(o);
o.aa();
o.ab();
D obj;
enter(obj);

}
