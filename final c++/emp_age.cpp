#include <iostream>
using namespace std;
class Employee
{
    int a;

public:
    void setData()
    {
        cout << "Enter the first emp age: ";
        cin >> a;
        
    }
    void getData() { cout << "a: " << a << endl; }

   
    Employee operator-(Employee d2)
    {
        Employee tmp;
        tmp.a = a - d2.a;
        return tmp;
    }
    
};
int main()
{
	Employee d1,d2,tmp;
	d1.setData();
	d2.setData();
	tmp=d1-d2;
	tmp.getData();
	return 0;
}
