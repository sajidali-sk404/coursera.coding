#include<iostream>

using namespace std;

int main(){
	
	int marks;
	cout<<"enter your marks: ";
	cin>>marks;
	
	if(marks >  90 && marks <= 100){
		cout<<"your Grade is :  A+ "<<endl;
	}
	else if(marks > 70 && marks < 90){
		cout<<"your Grade is :  A "<<endl;
	}
	
	else if(marks > 50 && marks < 70){
		cout<<"your Grade is :  B "<<endl;
	}
	else if(marks < 50 ){
		cout<<"you are fail "<<endl;
	}

	
	
	
	
	return 0;
}