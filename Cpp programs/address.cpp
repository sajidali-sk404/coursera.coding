#include<iostream>
#include<string>


using namespace std;


int main(){
	char name [30];
	int age;
	
	char address [100];
	
	cout<<"Enter your Name     :  "<<endl;
	cin>>name;
	
	cout<<"Enter your age      :  "<<endl;
	cin>>age;
	
	cout<<"Enter your address  :  "<<endl;
	cin>>address;
	
	cout<<" your Name   :  \t"<<name<<endl;
	
	cout<<" your age    :  \t"<<age<<endl;
	cout<<"your address :  \t"<<address<<endl;	
	return 0;
}