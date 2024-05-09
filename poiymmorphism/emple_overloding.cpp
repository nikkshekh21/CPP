/*Q.1 Write a Program to perform all basic arithmetic. operations such as +, -, *, and / operations by implementing method overloading using 2 classes.
- use only one method named calculate() in the child class
- if you pass 2 arguments, perform division
- if you pass 3 arguments, perform subtraction
- if you pass 4 arguments, perform multiplication
- if you pass 5 arguments, perform addition*/
#include<iostream>
using namespace std;
class calculate
{
	public:
     	void printSum(int a,int b) {
			cout << "division of " << a << " & " << b << " = " << a/b << endl;
		}
		void printSum(int a,int b,int c) {
			cout << "subtraction of " << a << ", " << b << " & " << c << " = " << a-b-c << endl;
		}
		void printSum(int a,int b,int c,int d) {
			cout << "multiplication of " << a << ", " << b << ", " << c << " & " << d << " = " << a*b*c*d << endl;
		}
		void printSum(int a,int b,int c,int d,int f) {
			cout << "addition of " << a << ", " << b << ", " << c << " , " << d << " & " << f <<  " = " << a+b+c+d+f << endl;
		}
		int getSum(int a,int b,int c,int d,int f) {
			cout << "a: " << a << endl
				 << "b: " << b << endl
				 << "c: " << c << endl
				 << "d: " << d << endl
				 << "f: " << f << endl;
			return a+b+c+d+f;
		}
		
	
};
class Calc : public calculate {
	public:
		//Method overriding
		int getSum(int a,int b,int c,int d,int f) {
			cout << "The calculate based on your arguments ";
			return a+b+c+d+f;
		}
		
		void name() {
			cout << "The ans based on your arguments" << endl;
		}
};

int main() {
	
	Calc m;
	
	m.name();
	
	m.printSum(12, 6);
	m.printSum(33, 22, 11);
	m.printSum(2, 2, 2, 2);
	m.printSum(11, 22, 33, 44, 55);
	
//	m.getSum(11, 22);
	
	cout << "Sum: " << m.getSum(2,3,4,5,6);
	
}

/*int main()
{
/*	int arg;
	cout<<"Enter the aarguments";
	cin>>arg;
	calculate c1;
	c1.printfsum();
	c1.printfsum();
	c1.printfsum();
	c1.printfsum();
	c1.getsum();
}*/