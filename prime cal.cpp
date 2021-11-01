#include<iostream>
using namespace std;
int main()
{
cout<<"PRIME CHECKER"<<endl;
int x;
cout<<"Enter the number:"<<endl;
while(1)
{
cin>>x;
if(x==1||x==2||x==3||x==5||x==7)
{ 
cout<<"The number"<<x<<" is prime"<<endl;
}
else if(x%2!=0&&x%3!=0&&x%5!=0&&x%7!=0)
{
	cout<<"The number"<<x<<" prime"<<endl;
}
else
{
	cout<<"The number is not prime"<<endl;
}
}
return 0;
}

