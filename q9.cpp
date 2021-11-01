#include<iostream>
using namespace std;
void barchart(int,int,int,int,int);
int main()
{
	int a1,a2,a3,a4,a5;
	cout<<"Enter todays sales for store 1 : ";
	cin>>a1;
	cout<<"Enter todays sales for store 2 : ";
	cin>>a2;
	cout<<"Enter todays sales for store 3 : ";
	cin>>a3;
	cout<<"Enter todays sales for store 4 : ";
	cin>>a4;
	cout<<"Enter todays sales for store 5 : ";
	cin>>a5;
	cout<<"--------------------------------"<<endl;
	barchart(a1,a2,a3,a4,a5);
	
	return 0;
}
void barchart(int a1,int a2,int a3,int a4,int a5)
{
	int x=a1/100,y=a2/100,z=a3/100,xx=a4/100,yy=a5/100;
	cout<<"Store 1 : ";
	for(int i=0;i<=x;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	cout<<"Store 2 : ";
	for(int i=0;i<=y;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	cout<<"Store 3 : ";
	for(int i=0;i<=z;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	cout<<"Store 4 : ";
	for(int i=0;i<=xx;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	cout<<"Store 5 : ";
	for(int i=0;i<=yy;i++)
	{
		cout<<"*";
	}
	cout<<endl;
	
}
