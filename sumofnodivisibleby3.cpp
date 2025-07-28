# include <iostream>
 using namespace std;
 int main(){
 	int i = 0;
 	int num = 20;
 	int sum = 0;
 	for (i ; i<=num; i++){
 		if(i%3 == 0){
 			sum+=i;
		 }
	 }
	 cout<<sum;
	 return 0;
 }
