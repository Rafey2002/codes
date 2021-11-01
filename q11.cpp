#include<iostream>
using namespace std;
int main()
{
	int a,max=0,min;
	while(1)
	{
		cout<<"Enter a value greater other than -99 : ";
	    cin>>a;
	    if(a!=-99)
	    {
	    	max=a;min=a;
	    	if(a>max)
	    	{
	    		max=a;
			}
			if(a<min)
			{
				min=a;
			}
		}
	}
	cout<<"Maximum value = "<<max<<endl;
	cout<<"Minimun value = "<<min<<endl;
	return 0;
}
