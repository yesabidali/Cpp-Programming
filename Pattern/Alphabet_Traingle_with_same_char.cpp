#include <iostream>
using namespace std;
int main(){ 
int column = 4;
char ch = 'A';
for(int i=1 ; i<=column ; i++){
	for(int j=1 ; j<i ; j++){
		cout<<ch;
		ch = ch+1;
	}
	
cout<<endl;
}
return 0;
}
