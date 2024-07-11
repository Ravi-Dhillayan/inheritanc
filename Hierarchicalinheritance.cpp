
#include<iostream>
using namespace std;
class in{
	protected:
	int a;

	public:
		in(){
			cout<<"--------Hello your Welcome to progam---------"<<endl;
		}
};
class her:public in{
	public:
		her(){
			a=10;
			cout<<a<<endl;
			cout<<"It is Multilevel inheritance : "<<endl;
		}
};
class hier:public in,public her {
	public:
	int i,j,n,min,temp;
	int *a;
	public :
		friend void fun(hier &o);
};
void fun(hier &o){
		cout<<"It is Hierarchical inheritance : "<<endl;
	cout<<"Enter the Size of array : "<<endl;
	cin>>o.n;
	o.a=new int[o.n];
	cout<<"Enter the Unshorted array : "<<endl;
	  for(o.i=0;o.i<o.n;o.i++){
       	cin>>o.a[o.i];
	   }
	for(o.i=0;o.i<o.n;o.i++){
		o.min=o.i;
		for(o.j=o.i+1;o.j<o.n;o.j++){
			if(o.a[o.min]>o.a[o.j]){
			o.min=o.j;
			}
			
		}
			o.temp=o.a[o.i];
				o.a[o.i]=o.a[o.min];
				o.a[o.min]=o.temp;
	}
	cout<<"Your shorted array print using the selection short : "<<endl;
       for(o.i=0;o.i<o.n;o.i++){
       	cout<<o.a[o.i]<<endl;
	   }
	
	
	
	
	
	
}
int main(){
//	her obj;
	hier ob;
	fun(ob);
	
}
