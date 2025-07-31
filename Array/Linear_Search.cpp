#include<iostream>
using namespace std;

int main(){
	int arr[5] = {23,34,89,1,22};
	cout<<"Enter the key that you want to search? : \n";
	int key;
	cin >> key;
	for ( int i=0 ; i<5; i++){
		if(arr[i]==key){
			cout<<"Your value is found on index "<< i << endl;
			return 0;
		}	
	}
	cout<<"Value of not present in array\n";
	return 0;
}
