#include <iostream>
using namespace std;

class ExceptionHandling {
	private:
		int num1,num;
public:
    void setData() {
    	cout<<"Enter the first number:";
    	cin>>num1;
    	 cout<<"Enter Number : ";
    	 cin>>num;
    	 
        try {
            if (num == 0) {
                throw 1 ;
            } else if (num < 0) {
                throw '1';
            } else {
                cout << "Result : " <<num1/num << endl;
            }
        } catch (int n) {
            cout << "Zero Division Error: Cannot divide by zero! " << endl;
        } catch (char negative) {
            cout << "cannot divide by a nagitive number "  << endl;
        } catch (...) {
            cout << "an unknown exception." << endl;
        }
    }
};

int main() {
    ExceptionHandling e1;

    cout<<endl<<"divide by 0:" << endl;
    e1.setData();

    cout<<endl<<" Negative Number :" << endl;
    e1.setData();

    cout<<endl<<"Example 3 Valid Number :" << endl;
    e1.setData();

}