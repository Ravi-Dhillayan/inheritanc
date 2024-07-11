#include<iostream>
using namespace std;
double bank_bal = 5000, withd, credit;
int p = 123,n,choice;

class A {
	public:
		A() {
			cout << "Enter your choice\n1.Bank Balance\n2.withdrawal\n3.credit\n0.exit\n";
			cin >> choice;	
		}
		void bank() {
			cout << "Enter the password: ";
			cin >> n;
			if(n == p) {
				cout << "Enter your withdrawal amount: ";
				cin >> withd;
				bank_bal -= withd;
				cout << "successfully your bank balance withdrawal\nyour bank balance is " << bank_bal << endl;
			}
		}
		void check() {
			cout << "you bank balance is " << bank_bal << endl;
		}
};
class B:public A {
	public:
		void bank() {
			cout << "Enter the password: ";
			cin >> n;
			if(n == p) {
				cout << "Enter your credit amount: ";
				cin >> credit;
				bank_bal += credit;
				cout << "successfully your bank balance credited\nyour bank balance is " << bank_bal << endl;
			}
		}
};

int main() {
	do{
	A *ptr;
	B o;
	ptr = &o;
	switch(choice) {
		case 0:
			exit(0);
		case 1:
			o.check();
			break;
		case 2:
//			o.A::bank();
			ptr->bank();
			break;
		case 3:
			o.bank();
			break;
		default:
			cout << "Please enter a correct value\n";
}
}
