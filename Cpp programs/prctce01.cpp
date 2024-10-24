#include<iostream>

using namespace std;

		//**(structure)**//
//	struct student{
//		int ID;
//		char favchar;
//		float salary;
//	};

	union 
	{
		int id;
		char character;
		float salary;
		
		
	};


int main(){
	
	union student sd;
	
	sd.id = 23;
	
	cout<<sd.id;
	
		//**(structure)**//
	
//	student sajid;
//	sajid.ID = 1;
//	sajid.favchar = 'c';
//	sajid.salary = 12000000;
//	
//	cout<<sajid.ID<<endl;
//	cout<<sajid.favchar<<endl;
//	cout<<sajid.salary<<endl;
	
	//**(pionter to array)**//
	
//	int arr[4]{12,32,45,67};
//	int* a = arr;
//	
//	cout<<a;
//	
//	cout<<arr[0]<<endl;
//	cout<<arr[1]<<endl;
//	cout<<arr[2]<<endl;
//	cout<<arr[3]<<endl;

	
		//**(pionter & pionter to pionter)**//
	
//	int a = 20;
//	int* b = &a;
//	int** c = &b;
//	
//	cout<<*b<<endl;
//	cout<<&a<<endl;
//	cout<<**c<<endl;
//	
	
	//**(break & continue)**// 
	
//	int a = 12;
//	float f = 1.32;
//	
//	cout<<"the value of a is "<<a<<endl;
//	cout<<"the value of f is "<<sizeof(1.32f)<<endl;
//	cout<<"the value of double is "<<sizeof(1.32d)<<endl;
//	cout<<"the value of long double is "<<sizeof(1.32l)<<endl;

//	for(int i = 0 ; i<40 ;i++){
//		
//		if(i==6){
//			break;
//		}
//		cout<<i<<endl;
////	}	
//	for(int i = 0 ; i<40 ;i++){
//		
//		if(i==6){
//			continue;
//		}
//		cout<<i<<endl;
//	}	
//	
	return 0;
}