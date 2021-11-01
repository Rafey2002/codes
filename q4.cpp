#include <iostream>
using namespace std;
int mult(int,int); 
int main()
 {
   int x, y;
   for ( int i = 1; i <= 3; ++i ) {

      cout<<"Enter two integers: ";

       cin>>x>>y;

          if (mult(x,y) )

          cout<<y<<" is a multiple of "<<x<<endl;

       else

          cout<<y<< " is not a multiple of " <<x<<endl;

    }
    cout<<endl;
    return 0;
 }
int mult( int a, int b )
 {
    return !( b % a );
 } 
