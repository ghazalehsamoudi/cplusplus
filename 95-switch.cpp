#include<iostream>
using namespace std;
main(){
	int x;
	cout<<"Please enter a number:";
	cin>>x;
	switch(x){
		case 1:
			cout<<"x is 1";
			break;
		case 2:
			cout<<"x is 2";
			break;
		default:
			cout<<"Unknown value";
	}
}
