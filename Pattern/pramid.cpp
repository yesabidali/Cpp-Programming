#include <iostream>
using namespace std;
int main() { 
int column = 4;
for(int i=1 ; i<=column; i++){
	for(int j=1 ; j<=column-i; j++){
		cout<<" ";
	}
	for(int k=1; k<=i; k++){
		cout<<"*";
	}
	cout<<endl;
}
return 0;
}
    
    

