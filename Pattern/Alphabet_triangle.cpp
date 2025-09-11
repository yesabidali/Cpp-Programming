#include <iostream>
using namespace std;
int main(){ 
int column = 5;
for(int i=1 ; i<=column ; i++){
	char ch = 'A';
	for(int j = 1 ; j<column ; j++){
		cout<< ch;
		ch = ch+1; 
	}
cout<<endl;
}
return 0;
}
