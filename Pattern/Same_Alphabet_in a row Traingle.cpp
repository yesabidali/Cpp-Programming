#include <iostream>
using namespace std;
int main(){ 
int column = 5;
for(int i=1 ; i<=column ; i++){
	char ch = 'A';
	ch = ch+(i-1);
	for(int j = 1 ; j<=i ; j++){
		cout<< ch;
	}
cout<<endl;
}
return 0;
}
