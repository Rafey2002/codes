#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
int a,b ;
double r;
char c;

cout<<"enter any two numbers"<<endl;
cin>>a>>b;
cout<<"enter any operator"<<endl;
cin>>c;
if(c=='+')
{r=a+b;
cout<<r<<endl;
}
else if(c=='-')
{
r=a-b;
cout<<r<<endl;
}
else if (c=='*')
{
r=a*b;
cout<<r<<endl;
}
else if (c=='/')
{
r=a/b;
cout<<r<<endl;
}
return 0;
}

