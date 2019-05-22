#include <iostream>
using namespace std;
main(){
	int x;
	cout<<"Please enter a number:";
	cin>>x;
	if(x>0){
		cout<<x<<" is positive.";
	}else if(x<0){
		cout<<x<<" is negative.";
	}else{
		cout<<"The number that you entered is 0.";
	}
}
