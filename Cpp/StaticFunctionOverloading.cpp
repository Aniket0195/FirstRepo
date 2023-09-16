
#include <iostream>
using namespace std;

class Complex{
  public:
  static void show(){
      cout<<"bye"<<endl;
  }
  static void show(int x){
      cout<<"hello"<<endl;
  }
  
};

int main(){
    Complex c1;
    c1.show();
    static Complex c2;
    c2.show(23);



    return 0;
}

