#include<iostream>
using namespace std;
int main()
{
	int a,b;
	bool c;
	cout<<"Number : ";
	cin>>a;
	cout<<"Total Multiplicant : ";
	cin>>b;
	cout<<"Multiplicant type (E or O) : ";
	cin>>c;
	for(int i=1;i<=b;i++)
	{
		if(c=1)
		  {
		  	int z=b*i;
		    if(z%2=0)
	         { 
	         cout<<b<<" * "<<i<<" = "<<z<<endl;	
             }
         }
	 else 
	 {
	 int z=b*i;
	       if(z%2!=0)
	         {
	           cout<<b<<" * "<<i<<" = "<<z<<endl;
             }
     }
	}
	
	return 0;
}
