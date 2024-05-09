#include<iostream>
using namespace std;
class student{
	public:
	int id;
	string name;
	int marks;
	
};
int main()
{ 
 int n,i;
	cout<<"Enter the numbar of student: ";
	cin >>n;
	student s[n];
	for(i=0;i<n;i++)
	{
		cout << "Id of student " <<i+1<< ": ";
		cin >> s[i].id;
		cout <<endl<< "name of student " <<i+1<< ": ";
		cin >> s[i].name;
		
		cout <<endl << "marks of student " <<i+1<< ": ";
		cin >> s[i].marks;
	}
	for(i=0;i<n;i++)
	{
		cout <<"student id"s.id":"endl
		cout <<"student name"s.name":"endl
	}
	return 0;
}
