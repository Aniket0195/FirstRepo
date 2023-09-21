#include<iostream>
using namespace std;
class shape{
    public:
    virtual void displayArea() = 0;
};

class square: public shape{
    public:
    int a = 9;
    void displayArea();
};

void square:: displayArea(){
    cout<<a*a<<endl;
}

class rectangle: public shape{
  public:  
  int l = 4, b =5;
   void displayArea();
};


void rectangle:: displayArea(){
  cout<<l*b<<endl;
  
}
int main(){
   shape *ptr;
   
   rectangle r1;
   ptr = &r1;
   ptr -> displayArea();
   square s1; 
   ptr = &s1;
   ptr-> displayArea();
}
