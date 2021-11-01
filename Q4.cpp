#include<iostream>
using namespace std;
double av(double D1,double S1,double D2,double S2,double S3,double T3)
{
double D3,T1,T2,Av;
S1=S1*3.6; //converstion into km/h
T1=D1/S1;
T2=D2/S2;
T3=T3/60; //conversion into hours
D3=S3*T3;
Av=(D1+D2+D3)/(T1+T2+T3);
return Av;	
}

int main()
{
double X,x_speed,Y,y_speed,z_speed,z_minutes,time1,time2,dt3;
cout<<"Enter the first distance in km:"<<endl;
cin>>X;
cout<<"Enter the first speed in m/s:"<<endl;
cin>>x_speed;	
cout<<"Enter the 2nd distance in km:"<<endl;
cin>>Y;
cout<<"Enter the 2nd speed in km/h:"<<endl;
cin>>y_speed;
cout<<"Enter the 3rd speed in km/h:"<<endl;
cin>>z_speed;
cout<<"Enter the 3rd minutes in minutes:"<<endl;
cin>>z_minutes;
cout<<"Average Speed:"<<endl;
cout<<av(X,x_speed,Y,y_speed,z_speed,z_minutes)<<endl;
return 0;
}

