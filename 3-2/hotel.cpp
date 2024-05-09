/*Write a Program to get and display N numbers of Hotels and static information using Encapsulation with an array of objects member by including the below-mentioned attributes:
- hotel_id
- hotel_name
- hotel_type (like hotel or motel)
- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
- hotel_location (city name)
- hotel_establish_year
- hotel_staff_quantity
- hotel_room_quantity*/
#include<iostream>
using namespace std;

class hotel
{
	private :
		int id;
	 	char name[100];
		char type[100];
		int rating;
	 	static char location[100];
		int establish_year;
		int staff_quantity;
		int room_quantity;
	
	public :
		void setdata()
		{
			cout<<"enter your hotel ID:";
			cin>>id;
			cout<<"enter your hotel TYPE :";
			cin>>type;
			cout<<"enter your hotel name :";
			cin>>name;
			cout<<"enter your  hotel rating :";
			cin>>rating;
			cout<<"enter your establish year :";
			cin>>establish_year;
			cout<<"enter your staff quantity :";
			cin>>staff_quantity;
			cout<<"enter your room quantity :";
			cin>>room_quantity;
			cout<<"-----------------------"<<endl;
	}
	
		void getdata()
		{
			cout<<"hotel id :"<<id<<endl;
			cout<<"hotel type :"<<type<<endl;
			cout<<"hotel name :"<<name<<endl;
			cout<<"hotel location :"<<location<<endl;
			cout<<"hotel rating :"<<rating<<endl;
			cout<<"hotel establish year :"<<establish_year<<endl;
			cout<<"hotel staff quantity :"<<staff_quantity<<endl;
			cout<<"hotel room quanlity :"<<room_quantity<<endl;
			cout<<"-----------------------"<<endl;
		}


};

char hotel :: location[100] = "gujarat";
	
int main()
{
	int i,n;
	cout<<"Enter the number of hotels :";
	cin>>n;
	hotel h[n];
	
	for(i=0;i<n;i++)
	{
		h[i].setdata();
	}
	for(i=0;i<n;i++)
	{
		h[i].getdata();
	}
	
	return 0;
	
}