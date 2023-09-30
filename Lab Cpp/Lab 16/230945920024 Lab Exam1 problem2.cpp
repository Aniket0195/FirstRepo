#include<iostream>
using namespace std;
#include<string.h>

class UserString
{
	private:
		int string_len;
		char *ptr  ;
	public:
		UserString()
		{
			cout<<"Default Constructor is called"<<endl;
			
		}
			UserString(UserString&)
		{
			cout<<"Copy Constructor is called"<<endl;
			
		}
		
			~UserString()
		{
			cout<<" Destructor is called"<<endl;
			delete ptr;
		
			
		}
		void display()
		{
			cout<<"Length of the string is "<<string_len<<endl;
			cout<<"String is "<<ptr<<endl;
			
		}
		
		UserString operator=(UserString& s)
		{
			UserString temp;
			temp = (*this);
			string_len = s.string_len;
			ptr=new char[string_len+1];
			strcpy(ptr,s.ptr);
			return temp;
		}
		UserString(char *ptr1)
		{
			cout<<"prametrized constructor called"<<endl;
			string_len = strlen(ptr1);
			ptr=new char[string_len+1];
			strcpy(ptr,ptr1);
			delete ptr1;
			
		}
};

int main()
{
	UserString s1("Cpp Lab Exam");
	s1.display();
	
	UserString s2("CDAC");
	s2.display();
}
