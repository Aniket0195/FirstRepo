#include<iostream>
using namespace std;

class Complex
{
	private:
		int real,imag;
		
	public:
		Complex()
		{
			//Default constructor
			real=imag=0;
		}
		Complex(int real, int imag)
		{	//parameterized constructor
			this->real = real;
			this->imag = imag;
		}
		Complex operator-(Complex c) //- operator
		{
			Complex temp;
			temp.real = this->real - c.real;
			temp.imag = this->imag - c.imag;
			return temp;
		}
			Complex operator+(Complex c) // + operator
		{
			Complex temp;
			temp.real = this->real + c.real;
			temp.imag = this->imag + c.imag;
			return temp;
		}
		
		Complex operator-()//unary operator -
		{
			Complex temp;
			temp.real = -this->real;
			temp.imag = -this->imag;	
			return temp;
		}
		
		Complex operator++( ) //preincrement operator
		{
			Complex temp =(*this);
			cout<<"Before preincrement operator Complex no is :: "<<real<<"+"<<imag<<"i"<<endl;
			this->real++;
			this->imag++;
			cout<<"After preincrement operator Complex no is :: "<<real<<"+"<<imag<<"i"<<endl;
			return temp;
		}
				Complex operator++(int) //postincrement operator
		{
			Complex temp =(*this);
			cout<<"Before postincrement operator Complex no is :: "<<real<<"+"<<imag<<"i"<<endl;
			this->real++;
			this->imag++;
			cout<<"After postincrement operator Complex no is :: "<<real<<"+"<<imag<<"i"<<endl;
			return temp;
		}
		void display()
		{
			cout<<"Complex no is :: "<<real<<"+"<<imag<<"i"<<endl;
		}
			~Complex()
		{
			//Default destructor
		}
};

int main()
{
	Complex c1(2,3);
	Complex c2(1,2);
	Complex c3;
	c3 = c1-c2;//c3=c1.operator-(c2)
	c3.display();
	c3 = c1+c2;//c3=c1.operator+(c2)
	c3.display();
	c2 =-c1;   // c2=c1.operator-()
	c2.display();
	Complex c4;
	c4=++c1;
	c4=c1++;//c4=c1.opertor++(0)
}
