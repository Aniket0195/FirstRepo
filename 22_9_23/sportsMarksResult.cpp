#include <iostream>
using namespace std;
class student{
    
    int roll;
    int marks1;
    int marks2;
    
    public:
    student(int roll, int marks1, int marks2){
        this->roll = roll;
        this->marks1 = marks1;
        this->marks2 = marks2;
    }
    int resultMarks(){
    	return marks1+marks2;
	}
};

class sports{
    
    int sportsMarks;
    public:
    
    sports(int sportsMarks){
        this->sportsMarks = sportsMarks;
    }
    int getresult(){
    	return student::resultMatks)+sportsMarks;
	}
};

class result:public student, public sports{
    int avg;
    int total;
    public:
    
    void displayResult(int rollNo, int Marks1 , intMarks1 ,int sportsMarks ):student( roll,  marks1,  marks2),sports( sportsMarks)
    {
        
        cout<<"Avg is "<<sports::getresult()/3<<endl;
        cout<<"total is "<< sports::getresult()<<endl;
    }
    
}
using namespace std;

int main()
{
    
    result r1();
    

    return 0;
}
