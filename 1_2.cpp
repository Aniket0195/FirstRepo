//if function defination is not present in the derived class then compiler tries to search the same defination inside the base class
#include<iostream>
using namespace std;
class A 
{
    public:

    void display()
    {
        cout<<"Inside the function of the A"<<endl;

    }
};
class B: public A
{

};

int main()
{
    B bobj;
    bobj.display();


}