#include<iostream>
using namespace std;
#include <iostream>

int main()
{
    int n,a,b,i;
    int t1,t2,nextTerm;
   
    cout<<"Enter the name of terms1:";
    cin>> a;
    cout<<"Enter the name of terms2:";
    cin>> b;
    cout<< "Fibonacci Series:";
    cout<<"Enter the limit:";
    cin>> n;
   
    	
    for (i=0; i<=n; i++)
    	{
        cout<<a<<", ";
        cout<<b<<", ";
    nextTerm = a + b;
    cout<< nextTerm<<",";
    a=b;
    b=nextTerm;
   
    }
   
     cout<<endl;
   	cout <<"Series Ended"<<endl;
   	return 0;
    }
    
    
    	


