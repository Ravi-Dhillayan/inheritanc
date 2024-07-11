#include<iostream>
using namespace std;
class in{
	public:
		in(){
			cout<<"--------Hello your Welcome to progam---------"<<endl;
		}
};
class her:public in{
	public:
		her(){
			cout<<"It is multilevel inheritance : "<<endl;
		}
};
class multilevel:her{
	int i,j,n;
	int *a;
	public:
		multilevel(){
			cout<<"Enter the Size of array : "<<endl;
			cin>>n;
			a=new int[n];
			cout<<"Enter the Unshorted array :"<<endl;
			for(i=0;i<n;i++){
				cin>>a[i];
			} 
			for(i=0;i<n;i++){
				for(j=i;j<n;j++){
					if(a[i]>a[j]){
						int temp=a[i];
						a[i]=a[j];
						a[j]=temp;
					}
					
				
				}
			}
			cout<<"your Shorted array print : "<<endl;
				for(i=0;i<n;i++){
						cout<<a[i]<<endl;
					}
			
		}
};
int main(){
	multilevel obj;
}

