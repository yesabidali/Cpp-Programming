#include<iostream>
using namespace std;
int main(){
	cout<<"Write a year to check if it is a leap year not not? \n";
	int year;
	cin>>year;
	if(year%4 == 0 && year%100 != 0 || year%400 ==0){
		cout<<"It's a leap year";
	}
	else{
		cout<<"It's not a leap year";
	}
	return 0;
}
