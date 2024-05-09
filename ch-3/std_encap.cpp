/* Write a Program to create Student Record System for 5 students using Encapsulation. Consider the below-mentioned attributes in the Student class:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_email
- stu_college*/
#include<iostream>
#include<string.h>

using namespace std;

class Student
{
    private:
        int id;
 	    char name[100];
 		int age;
 		char course[100];
		char email[100];
		char college[100];
		char city[100];

	public :
		void setdata()
		{
			cout<<"Enter your id :- ";
			cin>>id;
			cout<<"Enter your name :- ";
			cin>>name;
			cout<<"Enter your age :- ";
			cin>>age;
			cout<<"Enter your course :- ";
			cin>>course;
			cout<<"Enter your email :- ";
			cin>>email;
			cout<<"Enter your city :-";
			cin>>city;
			cout<<"Enter your college :- ";
			cin>>college;
			cout<<"-----------------------"<<endl;
		}

		void getdata()
		{
			cout<<"ID :- "<<id<<endl<<"NAME :- "<<name<<endl<<"AGE :- "<<age<<endl<<"COURSE :- "<<course<<endl<<"EMAIL :- "<<email<<endl<<"CITY :- "<<city<<endl<<"COLLEGE :- "<<college<<endl;	
		}
};

int main()
{
    Student s1,s2,s3,s4,s5;

	s1.setdata();
	s1.getdata();
    s2.setdata();
	s2.getdata();
	s3.setdata();
	s3.getdata();
	s4.setdata();
	s4.getdata();
	s5.setdata();
	s5.getdata();
    
    return 0;
}j
