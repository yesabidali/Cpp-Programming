# include <iostream>
using namespace std;
int main(){
	cout<<"Write size of an array? \n";
	int n;
	cin>>n;
	int arr[n];
	cout<<"Write an elements of array? \n";
	for(int i=0 ; i<n; i++){
		cin>>arr[i];
	}
	int first = 0;
	int last = n-1;
	while(first<last){
		swap(arr[first],arr[last]);
		first++;
		last--;
	}
	for(int i=0; i<n; i++){
		cout << arr[i];
	}
	return 0;
}
