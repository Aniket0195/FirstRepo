
#include <iostream>
using namespace std;

class Complex{
 int i;
 int r;
  public:
 void get(){
     cin>>i;
     cin>>r;
 }
 void put(){
     cout <<i<<" + "<<r<<"i"<<endl;
 }
};

int main(){
    Complex *ptr = new Complex[2];
    for(int i = 0; i < 2; i++){
        ptr[i].get();
    }
    
    for(int i = 0; i < 2; i++){
        ptr[i].put();
    }
    
    



    return 0;
}
