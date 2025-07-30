 # include <iostream>
 using namespace std;
 int main(){
 	int i =2;
 	int num;
 	cout<<"Write number to check prime"<<endl;
 	cin>> num;
 	for(i; i<=num-1; i++){
 		if(num%i == 0){
 			cout<<"Not prime";
 			break;
		 }
		else {
			cout<<"Prime";
			break;
		}
	 }
	return 0;
 }
