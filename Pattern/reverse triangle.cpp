#include <iostream>
using namespace std;
int main(){ 
int column = 5;
for(int i = column ; i>=1 ; i--){
	for(int j = 1; j<=i; j++){
		cout<<i-1;
	}
	cout<<endl;
}
return 0;
}


