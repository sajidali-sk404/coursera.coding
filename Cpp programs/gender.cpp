#include<iostream>

using namespace std;

int main(){
	
	char gender;
	
	cout<<"Enter your Gender:  ";
	cin>>gender;
	
	if(gender == 'm'){
		cout<<"you are male"<<endl;
	}
	else{
		cout<<"you are female";
	}
	
	return 0;
}