#include<iostream>
using namespace std;
class device
{
	public:
	virtual void circle()=0;
	device()
	{
			string brand,brand2;
		int power_con,power_con2;
		int n;
	cout<<"Enter your choice for device: ";
	cin>>n;
		switch(n)
		{
			
		
	case 1:
		cout<<"Enter the brand of your leptop : ";
        cin>>brand;
        cout<<"Enter the power consumption of your leptop: ";
        cin>>power_con;
        cout<<endl<<"-------------------------------------------"<<endl;
        cout<<"THE LEPTOP BRAND\t:"<<brand<<endl;
        cout<<"LEPTOP POWER CONSUMPTION:"<<power_con<<endl;
		
		break;
	case 2:
				
        cout<<"Enter the brand of your smartphone : ";
        cin>>brand2;
        cout<<"Enter the power consumption of your smartphone: ";
        cin>>power_con2;
        cout<<endl<<"-------------------------------------------"<<endl;
        cout<<"THE SMARTPHONE BRAND\t:"<<brand2<<endl;
        cout<<"LEPTOP SMARTPHONE CONSUMPTION:"<<power_con2<<endl;
          
		break;
	
		default:
    			{
    				cout<<"---:please enter currect choice:---";
    			
				}
			}
	}
};
class leptop:public device
{

    public: 
	void data()
	{
		
	
	

};

	
		

//class smartphone : public leptop
//{


	public:
	void smart_phone()
	{
    
    
			
	}
};
int main()
{
	leptop l;
	l.data();
//	l.smart();
	//smartphone p;
//	p.data();
	l.smart_phone();
}