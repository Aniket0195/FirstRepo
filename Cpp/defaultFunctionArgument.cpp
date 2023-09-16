
#include <iostream>

using namespace std;

void display(char = '*', int = 3);


int main()
{
    cout<<"NA"<<endl;
    display();
        cout<<"FA"<<endl;
    display('#');

    cout<<"SA"<<endl;
    display('#',5);


    return 0;
}
void display(char c, int d){
    for(int i = 0; i< d; i++){
        cout<<c;
    }
    cout<<endl;
}
