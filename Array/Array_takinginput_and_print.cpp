# include <iostream>
using namespace std;
int main(){
	int size = 5;
	int prize[size];
	cout<< "Write value of Array"<<endl;
	for(int i=0 ; i<=size; i++){
		cin>> prize[i];
	}
	
	for(int j =0; j<size; j++){
		cout<< prize[j];
	} 
	return 0;
}
