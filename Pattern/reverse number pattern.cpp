#include <iostream>
using namespace std;
int main(){ 
int column = 5;
for(int i=1 ; i<=column; i++){
	for(int j =i ; j>=1; j--){
		cout<<j;
	}
	cout<<endl;
}
return 0;
}
