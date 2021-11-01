#include<iostream>
using namespace std;
int speed1=72;
int speed2=54;
double length(double l);
int main()
{
	int t;
	cout<<"Enter the time:"<<endl;
	cin>>t;
	cout<<"What is the length of the train?"<<endl;
	cout<<"Lenght of the goods train:"<<length(t)<<endl;
	return 0;
	
}

double length(double x)
{
	double a,b,d;
	cout<<"Converting speed into m/s:"<<endl;
	a=speed1*1000/3600;
	b=speed2*1000/3600;
	cout<<"New speeds :"<<a<<" "<<b<<endl;
	
	d=(a+b)*x;
	
	return d;
}

