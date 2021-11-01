#include <iostream>
const int a=5, b=233;
int encription(int);
int decryption(int);
using namespace std;


int main() {
 int X,A,C,N,y;
  cout <<"Enter the 16 digit code: ";
  cin>>X;
   A = X & 511; //because 511=0000000111111111
  cout << "The customer ID is :" << A << endl;
  C=X&65024; //65024=1111111000000000
  C=X>>7;
  cout <<"The customers account number is: " << C << endl;
  cout<<"The new encrypted code is: ";
  int encrypted = encription(X);
  cout<<encrypted;
  cout<<"The original number is: ";
  cout<<decryption(encrypted);
  return 0;
}
int encription(int X)
{
	return (a*X)+b;
}
int decryption(int enc)
{
	return (enc - b)/a;
}
