#include <iostream>
using namespace std;
int main(){
	int num , i =2 , j = 2;
	cout<<"Write num till you want series of prime no \n";
	cin>> num;
	for (i ; i<=num; i++){
		for (j = 2 ; j<i; j++){
			if(i%j==0){
				break;
			}
		}
		if (i==j){
		
		cout<< i <<endl;
}
	}
	return 0;
}
