#include<iostream>
#include<cmath>
using namespace std;
double lh(double x) 
{
	double y,p;
	
	y=sin(x);
	return y;
}
double rh(double x)
{
	double z;
	z=x-pow(x,2)/(3*2*1)+pow(x,5)/(5*4*3*2*1)-pow(x,7)/(7*6*5*4*3*2*1)+pow(x,9)/(9*8*7*6*5*4*3*2*1);
	return z;
}
double diff(double lh,double rh)
{
	double a;
	a=rh-lh;
	return a;
}
double sum(double f)
{
	double a,b,c,d,e,sum1,sum2,sum3,sum4,sum5;
	a=f;
	b=pow(f,3)/(3*2*1);
	c=pow(f,5)/(5*4*3*2*1);
	d=pow(f,7)/(7*6*5*4*3*2*1);
	e=pow(f,9)/(9*8*7*6*5*4*3*2*1);
	cout<<"sum1="<<endl;
	sum1=a;
	cout<<sum1<<endl;
	cout<<"sum2="<<endl;
	sum2=a-b;
	cout<<sum2<<endl;
	cout<<"sum3="<<endl;
	sum3=a-b+c;
	cout<<sum3<<endl;
	cout<<"sum4="<<endl;
	sum4=a+b+c-d;
	cout<<sum4<<endl;
	cout<<"sum5="<<endl;;
	sum5=a-b+c-d+e;
	cout<<sum5<<endl;
	return sum1,sum2,sum3,sum4,sum5;
}
int main()
{
	double p;
	cout<<"Enter the angle:"<<endl;
	cin>>p;	
	p= p * (3.1412/180);
	cout<<"left hand :"<<endl;
	cout<<lh(p)<<endl;
	cout<<"right hand:"<<endl;
	cout<<rh(p)<<endl;
	cout<<"Difference:"<<endl;
	cout<<diff(lh(p),rh(p))<<endl;
	cout<<"The sums in series:"<<endl;
	sum(p);
	return 0;	
}
