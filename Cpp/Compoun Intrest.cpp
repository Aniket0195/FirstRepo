#include <iostream>
  

#include<math.h> 
  
using namespace std;
int main() 
{

  double principal = 10000; 
  
 
  double rate = 5; 
  

  double time = 2; 
  

  double Amount = principal * 
                  ((pow((1 + rate / 100), 
                    time)));
  double CI = Amount - principal;
   
  cout<<"Compound Interest is : "<<CI;
  return 0;
}
