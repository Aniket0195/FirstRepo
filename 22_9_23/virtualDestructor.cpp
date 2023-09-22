#include <iostream>

using namespace std;
class classA
{
	public:
	
	virtual	~classA();

};
classA::~classA()
{
    	cout<<"in the destructor of A"<<endl;
}
class classB : public classA
{
	public:
		~classB();
};
classB::~classB()
{	cout<<"in the destructor of B"<<endl;}
	
int main() {
		classA* aptr = new classB();
		delete aptr;

}
