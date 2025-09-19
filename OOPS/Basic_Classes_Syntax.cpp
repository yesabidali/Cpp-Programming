#include <iostream>
#include <string>
using namespace std;

class Teacher{
	
private:
	double salary;
	
public:
	string name;
	string dept;
	string roomno;
	
	//setter
	void setSalary(double s){
		salary = s;
	}
	//geter
	double getSalary(){
		return salary;
	}
};
int main(){
	Teacher t1;
    t1.name = "zaid";
    t1.dept = "Science";
    t1.setSalary(100000);
    t1.roomno = "first";

    cout<<t1.name<<endl;
    cout<<t1.getSalary()<<endl;
    return 0;
	
}


