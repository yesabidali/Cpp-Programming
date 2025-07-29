#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the size of array that you want to make \n";
	cin >> n;
	int ary[n];
    cout<< "Enter " << n << " Elements: \n";
	for(int i=0 ; i<n; i++){
		cin>> ary[i];
	}
	int smallest = ary[0];
	for (int i = 1; i<n ; i++){
		if (ary[i]<smallest){
			smallest = ary[i];
		}
	}
	cout<<"The smallest ary is: "<< smallest << endl;

}
