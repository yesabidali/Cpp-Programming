#include <iostream>
using namespace std;
int main(){ 
int column = 4;
int num = 1;
for(int i=1 ; i<=column ; i++){
	for(int j=1 ; j<=i ; j++){
		cout<<num;
		num++;
	}
cout<<endl;
}
return 0;
}
