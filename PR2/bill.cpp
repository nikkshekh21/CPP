#include<iostream>
#include<string>
using namespace std;
class railway
{
    private:
        int Train_Number;
        string Train_Name;
        string Source;
        string Destination;
        int Train_Time;

    public:
        railway()
        {
            cout<<"train number:\t";
            cin>>train_number;
            cout<<"train name:\t";
            cin>>train_name;
            cout<<"source:\t";
            cin>>source;
            cout<<"destination:\t";
            cin>>destination;
            cout<<"train time:\t";
            cin>>train_time;
        }
        void dispaly()
        {
            cout<<"train number:\t"<<train_number
            <<"train name:\t"<<train_name
            <<"source:\t"<<source
            <<"destination:\t"<<destination
            <<"train time:\t"<<train_time;
        }
        void third()
        {
            int n3;
            cout<<"enter number of input:";
            cin>>n3;

            for(int i=1;i<=n3;i++)
            {
            void dispaly();
            }
        }

};

int main()
{
    int n,n1;
    cout<<"enter a choice 1 ,2 or 3:\t";
    cin>>n;
    if(n==1)
    {
        railway r;
    }
    else if(n==2)
    {
        cout<<"enter a for all detail and b for serching details:"<<endl;
        cout<<n1;

        if (n1==a)
        {
            void display();
        }
        else
        {
            
        }