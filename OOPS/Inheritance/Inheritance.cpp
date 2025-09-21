#include <iostream>
#include <string>
using namespace std;

class Person{
public:
	string name;
	int age;

Person(){
	
}
};

class Student : public Person{
public:
	int roolno;
	getInfo(){
		cout<<"name: "<<name<<endl;
		cout<<"rool_no: "<<roolno<<endl;
	}
};

int main(){
	Student s1;
	s1.name = "Babbu";
	s1.age = 23;
	s1.roolno = 112;
	s1.getInfo();
	
	return 0;
}
