#include<iostream>
#include<conio.h>
using namespace std;
class calc {

public: int a, b, res;
		void add();
		void subs();
		void mul();
		void div();
		void mod();

};

void calc::add() {
	cout << "Enter first operand\n";
	cin >> a;
	cout << "Enter second operand\n";
	cin >> b;
	res = a + b;
	cout << res;

}

void calc::subs() {
	cout << "Enter first operand\n";
	cin >> a;
	cout << "Enter second operand\n";
	cin >> b;
	res = a - b;
	cout << res<<endl;

}

void calc::mul() {
	cout << "Enter first operand\n";
	cin >> a;
	cout << "Enter second operand\n";
	cin >> b;
	res = a*b;
	cout << res<<endl;

}

void calc::div() {
	cout << "Enter first operand\n";
	cin >> a;
	cout << "Enter second operand\n";
	cin >> b;
	res = a / b;
	cout << res<<endl;

}

void calc::mod() {
	cout << "Enter first operand\n";
	cin >> a;
	cout << "Enter second operand\n";
	cin >> b;
	res = a % b;
	cout << res<<endl;

}



void main() {
	char ch;
	
	calc ob;
	while (1) {
	cout << "1. + \n 2.- \n 3. * \n 4. \\ \n 5. % \n Enter the operator \n";
	cin >> ch;
		switch (ch) {
		case '+':
			ob.add(); 
			break;

		
		case '-':
			
			ob.subs(); break;
		case '*':
			
			ob.mul(); break;
		case '/':
			

			ob.div(); break;
		case '%':
			
			ob.mod(); break;
		default: cout << "wrong choice";
			exit(0);

		}
	}
}


