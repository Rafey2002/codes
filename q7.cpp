#include <iostream>
using namespace std;

int main() 
{
    int a,b,c,d,e,f,g,h,i,sum;
    cout<<"Enter 4 digit number : ";
    cin>>a;
    b=a/1000;
    c=a%1000;
    d=c/100;
    e=c%100;
    f=e/10;
    g=e%10;
    h=g/1;
    i=g%1;
    sum=b+d+f+h;
    cout<<"Sum is = "<<sum<<endl;
    cout<<"Number in reverse : "<<h<<f<<d<<b<<endl;
    return 0;
}
