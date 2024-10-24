#include<iostream>

using namespace std;

int main(){
	
	int a,b,c;
	
	cout<<"enter A ";
	cin>>a;
	
	cout<<"enter B ";
	cin>>b;
	
	cout<<"enter C ";
	cin>>c;
	
	
	
	a = a*b*c;
	b = a/(b*c);
	
	c = a/(b*c);
	
	a = a/(b*c);
	
	

//	a = a+b+c;
//	
//	b = a-b-c;
//	
//	c = a-b-c;
//	
//	a = a-b-c;
	
	
	cout<<"A is "<<a<<endl;
	cout<<"B is "<<b<<endl;
	cout<<"C is "<<c<<endl;
	cout<<"A is "<<a<<endl;
	
	
	
	return 0 ;
}