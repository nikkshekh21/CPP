#include<iostream>
using namespace std;
class Animal
{
	public:
	virtual void king(int a)=0;
	           
   Animal()
	{
			cout<<"The fish water  boops!!!!"<<endl;}
	
  };



class lion : public Animal
{    
    public:
	void king(int a)
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
}

   