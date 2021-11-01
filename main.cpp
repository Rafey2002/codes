/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int looplimit, i = 1, a, sum = 0, max , min, maxin=0, minin=0;
  cout << "enter the loop limit = ";
  cin >> looplimit;

  while (i <= looplimit)
    {
      cout << "Enter the value of " << i << " number = ";
      cin >> a;
      
      sum = sum + a;
      {
    if (i==1){
        max = a;
        min = a;
    }      
	else if (max<=a)
	  {
	    max=a;
	    maxin=i;
	  }
	else if (min >= a)
	  {
	    min =a;
	    minin =i;
	  }
      }
      i = i + 1;
    }
    
    float avg =sum/looplimit ;
    
  cout << " Avg of inputs = "<<avg <<endl;
  cout << "sum of all the values is = " << sum << endl;
  cout << "max value of input value = " << max << endl;
  cout << "Index value of maximum input = "<<maxin<<endl;
  cout << "min value of input value = " << min << endl;
  cout << "Index value of minimum input = "<<minin<<endl;

  return 0;
}
