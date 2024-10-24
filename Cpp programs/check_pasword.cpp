#include<iostream>
#include<string>

using namespace std;

int main(){
	cout<<"press 1 open mobile account"<<endl;
	cout<<"press 2 open account balance"<<endl;
	cout<<"press 3 open mobile bundles"<<endl;
	cout<<"press 4 open zong bundles"<<endl;
	cout<<"press 5 open Jazz bundles"<<endl;
	cout<<endl<<endl;
	
	int input;
	cin>>input;
	
	if(input == 1){
		cout<<"Mobile Account"<<endl;
		
	}
	if(input == 2){
		cout<<"Account balance"<<endl;
	}
	if(input == 3){
		cout<<"mobile bondles"<<endl;
	}
	if(input == 4){
		cout<<"Zong bondles"<<endl;
	}
	if(input == 5){
		cout<<"Jazz bondles"<<endl;
	}
	
	if(input>5) {
		
		cout<<"ERROR";
	}
	
	
	
	
//	string password = "sajid";
//	
//	
//	string input;
//	cout<<"Enter the password :  ";
//	cin>>input;
//	
//	if(input == password){
//		
//		cout<<"Passwaord accepted"<<endl;
//	}
//	else
//	{
//	cout<<"Access denied";
//		
//	}
//	
//	
	
	
	
	return 0;
}