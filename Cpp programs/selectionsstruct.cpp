#include<iostream>

using namespace std;

int main(){

           // salection structure //
	//*************switch case*************//
	int age;
	cout<<"enter your age ";
	cin>>age;
	
	switch(age){
		case 18:
		cout<<"you can make moter car driving licence "<<endl;
		break;
		case 22:
			cout<<"you are make ltv driving licence "<<endl;
			break;
			default:
				cout<<"you are not eligible for driving licence "<<endl;
	}
	
	
	
	//*************if_else ladder*************
	
//	cout<<"Enter your age ";
//	cin>>age;
//	
//	
//	if((age>=18)&& (age<60)){
//		cout<<"you are eligible for cinc "<<endl;
//		
//	}
//	else if(age<18){
//		cout<<"you are not eligible for cinc "<<endl;
//		
//	}
//	
//	else if(age >= 60){
//		cout<<"your cnic is expire "<<endl;
//	}
//	
//	
//	
//	
	
	
	//*******************************//
//  int i ;
//	cout<<"enter i ";
//	cin>>i;
//	
//	if(i<5){
//		i++;
//		cout<<i;
//	}
	
//	int age, salary;
//	cout<<"enter your age ";
//	cin>>age;
//	
//	cout<<"enter your salary ";
//	cin>>salary;
//	
//	if(age>=25 && age<65 && salary>=30000){
//		cout<<"your are eligible for loan "<<endl;
//	}
//		else{
//			
//		cout<<"you are not eligible for the loan"<<endl;
//		} 
//	
	return 0 ;
}