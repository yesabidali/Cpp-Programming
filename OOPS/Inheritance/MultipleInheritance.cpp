#include <iostream>
#include <string>
using namespace std;

class Person{ // parent class person
public:
	string name;
	int age;
};

class Student: public Person { //child class student
public:
	int roolno;
	
};

class TA : public Person{ //child class TA which inhereriting property of parent class
public:
	string subject;
};

int main(){
	TA t1;
	t1.name = "Datta";
	t1.age = 23;
	t1.subject = "C++";
	
	cout<<"name: "<<t1.name<<endl;
	cout<<"age: "<<t1.age<<endl;
	cout<<"subject: "<<t1.subject<<endl;
	
	return 0;
}
