#include<iostream>

using namespace std;

int main(){
	
	const float pi = 3.14;
	
	float redius , area;
	cout<<"enter the redius of circle = ";
	
	cin>>redius;
	
	area = pi*redius*redius;
	
	cout<<"The area of the circle = "<<area;
	return 0;
}