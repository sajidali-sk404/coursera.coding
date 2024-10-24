#include<iostream>

using namespace std;

int main(){
	float number,sum=0.0;
	
	float max=0.0,mini=0.0;
	

	
	do{
		cout<<"Enter Numbers: ";
		cin>>number;
		sum+=number;
	if(number > max){
		max = number;
	}
	if(number < mini){
		mini=number;
	}
	
	}while(number != 0.0);
	
	cout<<"Maximum Number Entered"<<max<<endl;
	
	cout<<"Minimum Number Entered"<<mini<<endl;
	
	cout<<"The sum is:  "<<sum<<endl;
	
	return 0;
}

	
	