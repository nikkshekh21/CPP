#include<iostream>
using namespace std;
class Device
{
	private:
		string name;	
		
		void setdata()
		{
         cout<<"Enter the device name: ";
         cin>>name;		
	}
	public:
    void getdata()
    
    {
        cout<<"YOUR DEVICE : "<<name<<endl;
          
     }
};
class leptop : public Device
{
	
	string brand;
	int power_con;
     	public:
		void setdata()
		{
		cout<<"Enter the brand of your leptop : ";
        cin>>brand;
        cout<<"Enter the power consumption of your leptop: ";
        cin>>power_con;
		}
	public:
	 void getdata()
    
    {
        cout<<"THE LEPTOP BRAND\t:"<<brand<<endl;
        cout<<"LEPTOP POWER CONSUMPTION:"<<power_con<<endl;
          
     }

	
};
class smartphone : public Device
{
	string brand2;
	int power_con2;
	public:
		void setdata()
		{
			
         cout<<"Enter the brand of your smartphone : ";
        cin>>brand2;
        cout<<"Enter the power consumption of your smartphone: ";
        cin>>power_con2;
		}
	public:
	 void getdata()
    
    {
        cout<<"THE SMARTPHONE BRAND\t:"<<brand2<<endl;
        cout<<"LEPTOP SMARTPHONE CONSUMPTION:"<<power_con2<<endl;
          
     }
	
};
int main()
{
    
    leptop l;
    l.setdata();
    l.getdata();
    smartphone s;
    s.setdata();
    s.getdata();
    
    return 0;

} 



    