#include<iostream>
using namespace std;

class emp{
    public:
    int totalSalary();
};

int emp::totalSalary(){
    return 0;
}

class wageemp : public emp
{
    public:
    int hrs = 10;
    int rate = 10;
    int totalSalary();
}; 

int wageemp:: totalSalary(){
    return rate*hrs;
}

class salesManager : public wageemp
{
    public:
    int commission = 2;
    int sales = 100;
    int totalSalary();
};
int salesManager::totalSalary(){
    return commission*sales;
}


int main(){
    emp *ptr;
    emp e1;
    ptr = &e1;
    cout<<ptr -> totalSalary()<<endl;
    
    wageemp w1;
    ptr = & w1;
    cout<<ptr -> totalSalary()<<endl;
    
    salesManager sm;
    ptr = &sm;
    cout<<ptr -> totalSalary()<<endl;

}
