#include <iostream>
using namespace std;
int main(){
	int a=0 , b = 1 , i =0 , num, temp;
	cout<<"Write to get febonacci series \n";
	cin>> num;
	for (i; i<=num; i++){
		cout << a <<endl;
		temp = a+b;
		a = b;
		b = temp;
	}
	return 0;
}
