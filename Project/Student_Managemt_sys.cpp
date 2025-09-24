#include <iostream> //use for input output
#include <string.h> //use for string 
#include <fstream> //use for file handling
#include <windows.h> //for using multiple functions

using namespace std;
class University{
private:
	string Name, RoolNo, Course, Address;
public:
University():Name(" "),RoolNo(" "), Course(" "), Address(" "){
	
}

   setName(string name){ // Seting value of a Private variable
   	Name = name;
   }
   setRoolNo(string roolNo){
   	RoolNo = roolNo;
   }
   setCourse(string course){
   	Course = course;
   }
   setAddress(string address){
   	Address = address;
   }
   
   string getName(){ //getting value of Private variable
   	return Name;
   }
   string getRoolNo(){
   	return RoolNo;
   }
   string getCourse(){
   	return Course;
   }
   string getAddress(){
   	return Address;
   }
   
   
};

add(University student){ //making function to add student info
	string name;
	string roolNo;
	string course;
	string address;
	cout<<"Enter the name of Student: "<<endl;
	cin>>name;
	student.setName(name);
	
	cout<<"Enter Roll No of Student: "<<endl;
	cin>>roolNo;
	student.setRoolNo(roolNo);
	
	cout<<"Enter course of Student: "<<endl;
	cin>>course;
	student.setCourse(course);
	
	cout<<"Enter address of Student: "<<endl;
	cin>>name;
	student.setAddress(address);
	ofstream out(R"(C:\Users\abida\Desktop\Student_Management_data.txt)", ios::app);

	//ofstream out(R"C:\Users\abida\Desktop\Student_Management_data.txt", ios::app);// saving data of student ios :: app (append) is used to add new data every time and don't delete previous data
    if(!out){
    	cout<<" Error: File can't open!"<<endl;
	}
	else{
	out<<student.getName()<<" : "<<student.getRoolNo()<<" : "<<student.getCourse()
	<<": "<<student.getAddress()<<endl<<endl;
	out.close();
	cout<<"Student Added successfully!"<<endl;
	}
}

search(){
	string roolNo; //defining variable
	cout<<"Write Roll No for search student data"<<endl;
	cin>> roolNo;
	
	ifstream in(R"(C:\Users\abida\Desktop\Student_Management_data.txt)"); //using f stream to search in file
	if(!in){
		cout<<"Error: File can't open!"<<endl; 
	}
	string line; //making variable line which going to store the value of the line which have that roll no
	bool found = false; //seting flag initially false
	while(getline(in, line)){ // finding line from data base
		int data = line.find(roolNo); //.find is predefine function here
		if(data != string::npos){ // nscope give not found condition
			cout<<line<<endl; // printing line
			found = true; //now flag become true
		}
	if(!found){
	cout<<"Invalid roll no or Student is not register!"<<endl;
	}
	}
	in.close(); //close the file
	
}
void update(University &student) {
    string roolNo;
    cout << "Enter Roll no of Student: " << endl;
    cin >> roolNo;

    ifstream infile(R"(C:\Users\abida\Desktop\Student_Management_data.txt)");
    ofstream outfile(R"(C:\Users\abida\Desktop\Student_Management_temp.txt)");

    if (!infile || !outfile) {
        cout << "Error: File can't open!" << endl;
        return;
    }

    string line;
    bool found = false;

    while (getline(infile, line)) {
        int pos = line.find(roolNo);
        if (pos != string::npos) {
            string address;
            cout << "Enter New Address: " << endl;
            cin >> address;
            student.setAddress(address);

            int newPos = line.find_last_of(':');
            if (newPos != string::npos) {
                line = line.substr(0, newPos + 2) + student.getAddress();
            }
            found = true;
        }
        outfile << line << endl;
    }

    infile.close();
    outfile.close();

    remove(R"(C:\Users\abida\Desktop\Student_Management_data.txt)");
    rename(R"(C:\Users\abida\Desktop\Student_Management_temp.txt)",
           R"(C:\Users\abida\Desktop\Student_Management_data.txt)");

    if (found) {
        cout << "Data Updated!" << endl;
    } else {
        cout << "Student not found!" << endl;
    }
}


int main(){
University student; // object of a class
//	string exitWord = " ";
    bool exit = false;
	while(!exit){
		system("cls"); //used to clear privious data from screen
	int val;
	cout<<"Welcome To Student Management System"<<endl;
	cout<<"************************************"<<endl;
	cout<<"1.Add Student"<<endl;
	cout<<"2.Search Student"<<endl;
	cout<<"3.Update Data of Student"<<endl;
	cout<<"4.Exit"<<endl;
	cout<<"Enter Your Choice: "<<endl;
	
	cin>>val;
	if(val==1){
	system("cls");
	add(student);
	Sleep(5000); // Out will display for partical time it is counting time in milisecond
	}
	
	else if (val==2){
		system("cls");
		search();
		Sleep(5000);
	}
	
	else if(val==3){
		system("cls");
		update(student);
		Sleep(5000);
	}
	else if (val==4){
	    exit = true;
	}
	
	}
return 0;
}
















