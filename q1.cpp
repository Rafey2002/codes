#include <iostream>
#include<cmath>
using namespace std;
int revpermin(double ,double);
int main()
{
	double d,v;
	cout<<"Enter the diameter:"<<endl;
	cin>>d;
	cout<<"Enter the speed:"<<endl;
	cin>>v;
cout<<revpermin(d,v)<<endl;
	return 0;
}
int revpermin(double d,double v)
{
	double r,s,c,rpm;
	const double pi=3.142;
 r=d/2;
 s=v*16.667;
 c=2*pi*r;
 rpm=s/c;
 return round(rpm);
}
