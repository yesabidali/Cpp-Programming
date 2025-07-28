# include<iostream>
using namespace std;
int main(){
	int num, digit, sum =0;
	cout<<"Write a number to calculate sum of digits"<<endl;
	cin>> num;
	while(num != 0){
		digit = num%10;
		sum = sum+=digit;
		num = num/10;
	}
	cout<< sum;
	return 0;
}
