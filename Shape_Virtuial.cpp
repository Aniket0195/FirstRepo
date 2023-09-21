#include<iostream>
using namespace std;

class Shape
{
	public:
		
virtual int area() = 0;	
};
class Square : public Shape
{
		int side;
	public:
	
		Square (int side)
		{
			this->side= side;
		}
		int area()
		{
			return (side*side);
		}
};
class Rectangle : public Shape
{
	int l,b;
	public:
		Rectangle(int l, int b)
		{
			this->l = l;
			this-> b= b;
		}
		int area()
		{
			return(l*b);
		}
};

int main()
{
	Shape * ptr;
	
	Rectangle r1(4,3);
	ptr= &r1;
	cout<<ptr->area()<<endl;
	

	Square s1(10);
	ptr = &s1;
	cout<< ptr->area()<<endl;
	
}
