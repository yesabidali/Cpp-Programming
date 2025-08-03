#include <iostream>
using namespace std;
int main(){
	cout<<"Write the size of first array? \n";
	int n;
	cin>>n;
	int arr1[n];
	cout<<"Write the elements of array? \n";
	for (int i = 0; i<n ; i++){
		cin>>arr1[i];
	}
	cout<<" Write the size of second array? \n";
	int n2;
	cin>>n2;
	int arr2[n2];
	
	cout<<" Write the elements of array? \n";
	for (int i =0 ; i<n2 ; i++){
		cin >> arr2[i];
	}
	cout<<"Intersaction of two array? \n";
	int i;
	for(i = 0 ; i<n ; i++){
		bool found = true;
		
		for(int j = 0 ; j<n ; j++){
			if(arr1[i]==arr1[j]){
				found = false;
				break;
			}
		}
		if (!found){
			for(int k = 0 ; k<n2 ; k++){
				if(arr1[i]==arr2[k]){
					cout<<arr1[i]<<" ";
					break;
				}
			}
		}
	}
	return 0;
}
