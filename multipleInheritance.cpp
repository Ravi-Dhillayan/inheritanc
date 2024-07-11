
#include<iostream>
using namespace std;
class in{
	public:
		in(){
			cout<<"--------Hello your Welcome to progam---------"<<endl;
		}
	virtual	void enter(){
			cout<<"Hello word : "<<endl;
		}
};
class her{
	public:
		virtual void enter(){
			cout<<"Hello  : "<<endl;
		}
		her(){
			cout<<"It is multiple inheritance : "<<endl;
		}
};
class tance:public in , public her{
	int i,n,j=0,k=1,sum;
	public:
		tance(){
			cout<<"Enter the n number : "<<endl;
		cin>>n;
		cout<<"printed the fibonacci series : "<<endl;
		for(i=0;i<n;i++){
			cout<<j<<endl;
			sum=j+k;
			j=k;
			k=sum;
		}
		}
		
	
};
int main(){
tance obj;
    in *a;
	a = &obj;
    a->enter(); 
	   
	   
}
