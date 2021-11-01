#include<iostream>
#include<cmath>
using namespace std;
void lh(double n) 
{
	double y,p;
	
	y=sin(n);

}
void rh(double n)
{
	double z;
	z=n-pow(n,3)/(3*2*1)+pow(n,5)/(5*4*3*2*1)-pow(n,7)/(7*6*5*4*3*2*1)+pow(n,9)/(9*8*7*6*5*4*3*2*1);

}
void diff(double lh,double rh)
{
	double a;
	a=rh-lh;

}
void sum(double f)
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

}
int main()
{
	double o;
	cout<<"Enter the angle:"<<endl;
	cin>>o;	
	o= o * (3.1412/180);
	cout<<"left hand :"<<endl;
	lh(o);
	cout<<"right hand:"<<endl;
	rh(o);
	cout<<"Difference:"<<endl;
	diff(lh(o),rh(o));
	cout<<"The sums in series:"<<endl;
	sum(o);
	return 0;	
}
