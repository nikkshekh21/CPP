#include<iostream>
using namespace std;
class Animal
{
	public:
	virtual void king()=0;
	           
   Animal()
	{
			cout<<"The ANIAML!!!!"<<endl;
    }
	
  };



class lion : public Animal
{    
    public:
	void king()
	{
		cout<<"The king sound roar!!!!"<<endl;
	}
	
	lion()
	{
		cout<<"The fish sound in water___boop!!"<<endl;
	}
};
int main()
{
	lion l;
	l.king();
}

   