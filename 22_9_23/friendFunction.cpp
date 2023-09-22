
#include <iostream>

using namespace std;
class temp{
    int x;
    public:
    void get(){
        cin>>x;
    }
    void show(){
        cout<<"in friend fn x "<<x;
    }
      friend void manipulate(temp&);  
};

void manipulate(temp &t1){
        t1.x = t1.x + 5;
    }
    
int main(){
    temp t;
    t.get();
    manipulate(t);
    t.show();

    return 0;
}