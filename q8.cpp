#include<iostream>
using namespace std;
void funct(int,int);
int main()
{
	int s,h;
	    cout<<"What is the speed of the vehicle in  mph? ";
	    cin>>s;
	    cout<<"How many hours has it travelled? ";
	    cin>>h;
	    if(h>0 && s>0)
	    {
	    	funct(s,h);
		}
		else
		{
			cout<<"End"<<endl;
		}
		
	return 0;
}
void funct(int s,int h)
{
	cout<<"Hour"<<"     "<<"Distance Traveled"<<endl;
	cout<<"--------------------------------------"<<endl;
	for(int i=1;i<=h;i++)
	{
		int a=s*i;
		cout<<i<<"     "<<a<<endl;
		
	}
}
