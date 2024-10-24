#include<iostream>

using namespace std;

int main(){
	
	int age , salary ;
	
	cout<<"enter your age "<<endl;
	cin>>age;
	
	cout<<"enter your salary "<<endl;
	cin>>salary;
	
	(age>=25 && age < 65 && salary >= 30000? cout<<"you are eligible for the loan ": cout<<"you are not eligible for the loan");

	
	
	
	
	return 0 ;
}