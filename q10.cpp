#include<iostream>
#include<cmath>
using namespace std;
double hypotenuse(int,int);
int main()
{
	int t,a,b;
	cout<<"Number of triangles : ";
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		cout<<"Enter the length of first side : ";
		cin>>a;
		cout<<"Enter the length of second side : ";
		cin>>b;
		cout<<"Hypotenuse : "<<hypotenuse(a,b)<<endl;
	}
	return 0;
}
double hypotenuse(int x,int y)
{
	double c=pow(pow(x,2)+pow(y,2),1/2);
	return c;
}
