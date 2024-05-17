#include<iostream>
using namespace std;
class student
{
	private:
		int roll_no;
		string name;
		public:
		void setdata()
		{
			cout<<"Enter the student roll_no: ";
			cin>>roll_no;
			cout<<"Enter the student name: ";
			cin>>name;
			this->roll_no=roll_no;
			this->name=name;
			
			
		}
		public:
		void getdata()
		{
			cout<<"STUDENT ROLL NO : "<<roll_no<<endl;
			cout<<"STUDENT NAME : "<<name<<endl;
			
		}
};
int main()
{
	int i,size;
    cout<<"Enter number of student: ";
    cin>>size;
    student s[size];

    for(i=0;i<size;i++)
    {
        cout << endl << "Enter details for student " << i + 1 << ":" << endl<<endl;
        s[i].setdata();
    }
    cout<<"---------------------------"<<endl;
    cout << endl << "student details:" << endl<<endl;
    for(i=0;i<size;i++)
    {
        s[i].getdata();
    }
    return 0;
}