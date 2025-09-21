#include <iostream>
#include <string>
using namespace std;

class Person{  
public:
	string name;
	int age;

Person(string name, int age){ //constructor of person class
	this->name = name;
	this->age = age;
	
}
};

class Student : public Person{ //Student class inheriting Peron class
public:
	int roolno;
	
    Student(string name, int age, int roolno) : Person(name, age){ //constructor for student and inhering the constructor of person class
	    this->roolno = roolno;
}
	
};

class Graduation: public Student{ // gradute class inherinting the property of public classs
public:
	string rArea;
	
	Graduation(string name, int age, int roolno, string rArea) //constructor for graduation class inherite the property of student and person class
        : Student(name, age, roolno) {
        this->rArea = rArea;
    }
    
	getInfo(){ // method to get info
		cout<<"name: "<<name<<endl;
		cout<<"rool_no: "<<roolno<<endl;
		cout<<"age: "<<age<<endl;
		cout<<"Research area "<<rArea<<endl;
	}
};

int main(){
	Graduation g1("Maqbool", 7,29,"Crime");  // making object for class
	g1.getInfo(); // calling method 
	
	return 0;
}
