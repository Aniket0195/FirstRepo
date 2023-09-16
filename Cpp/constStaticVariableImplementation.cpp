
#include <iostream>

using namespace std;

class complex{
    int real , img;
    public: static const int cnt;
    private: static const int cnt1;
    public:
    complex(){
        cout<<"default is invoked"<<endl;
        real = 5;
        img = 5;
      
    }
    complex(int real, int img){
        cout<<"paramaterized constructor invoked"<<endl;
        this->real = real;
        this->img = img;
 
    }
    const static int getCnt(){
        return cnt;
    }
    
};
const int complex :: cnt=4;
const int  complex::cnt1= 69;

int main(){
     complex c1; 
     complex c2(10,20);
    cout<<"no of obj: "<<complex::getCnt()<<endl;
    cout<<"size of obj: "<<sizeof(c1)<<endl;
    cout<<complex::cnt;
    return 0;
}
