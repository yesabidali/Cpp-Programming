#include <iostream>
#include <string>
using namespace std;

class Person{ // parent class person
public:
	string name;
	int age;
};

class Student{ //parent class student
public:
	int roolno;
	
};

class TA : public Person, public Student{ //child class TA which inhereriting property of both parent class
	
};

int main(){
	TA t1;
	t1.name = "Langra";
	t1.age = 23;
	t1.roolno = 112;
	
	cout<<"name: "<<t1.name<<endl;
	cout<<"age: "<<t1.age<<endl;
	cout<<"rool_no: "<<t1.roolno<<endl;
	
	return 0;
}
