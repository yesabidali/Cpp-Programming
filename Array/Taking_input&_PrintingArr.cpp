#include<iostream>
using namespace std;
int main(){
	cout<< "Enter the 6 array elements";
	int size = 6;
	int arr[size];
	for ( int i = 0 ; i<size; i++){
		cin>>arr[i];
	}
	for(int i = 0; i<size; i++ ){
		cout << arr[i];
	}
	return 0;
}
