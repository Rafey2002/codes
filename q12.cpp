#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,e,f,g,h,i;
	cout<<"Enter a Binary number (0 or 1) (5 digits only) : ";
	cin>>a;
	b=a/10000;
    c=a%10000;
    d=c/1000;
    e=c%1000;
    f=e/100;
    g=e%100;
    h=g/10;
    i=g%10;
    int z=(a*1+b*2+d*4+f*4+h*8);
    cout<<"The decomal equivalent of "<<a<<" is : "<<z<<endl;
    return 0;
}
