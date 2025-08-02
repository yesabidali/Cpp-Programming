#include <iostream>
using namespace std;
int main(){
	cout<<"Write the size of array ? \n";
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0 ; i<n ; i++){
		cin>>arr[i];
	}
	
	cout<<"The unique elemets is : \n";
	for(int i = 0; i<n ; i++){
		bool isUnique = true;
		
		for (int j = 0 ; j<n ; j++){
			if(i!=j && arr[i] == arr[j]){
				isUnique = false;
				break;
			}
		}
		if(isUnique){
		cout<< arr[i]<< " ";
	         }
	}
	return 0;
}
