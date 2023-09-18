#include <iostream>
#include<string.h>
using namespace std;

class date{
	int dd,mm,yy;
	public:
		void show();
		date (int,int,int);
	};
	date::date(int d,int m,int y)
	{
		dd=d;
		mm=m;
		yy=y;
	}
	void date::show()
	{
		cout<<"Date is "<<dd<<"/"<<mm<<"/"<<yy<<endl;
	}


int main()
{
	date d(8,9,2015);
	date d1(d);//copy constructor called by compiler
	d.show();
	d1.show();
	return 0;
}
