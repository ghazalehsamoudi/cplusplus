#include<iostream>
using namespace std;
main(){
	int x;
	cout<<"Please enter a number:";
	cin>>x;
	switch(x){
		case 1:	
		case 2:
		case 3:
			cout<<"x is (1 or 2 or 3)";
		default:
			cout<<"x is not (1 or 2 or 3)";
	}
}
