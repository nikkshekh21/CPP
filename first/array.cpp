#include<iostream>
using namespace std;

int main()
{
	int r,c,i,j;
	cout<<"enter row size: ";
	cin>>r;
	cout<<"enter column size: ";
	cin>>c;
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<< "a:";
			cin>>a[r][c];
		}
	}
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cout<<" ";
		}
	}
	
}