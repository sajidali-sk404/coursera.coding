#include<iostream>
using namespace std;


int add(int a,int b);




		//function//
//
//int multiplication(int a,int b){
//	int c = a*b;
//	return c;
//}

//int sum(int a, int b){
//	int c = a+b;
//	return c;
//}


int main(){
	int a2 , b2;
	cout<<"enter a2 "<<endl;
	cin>>a2;
	cout<<"enter b2 "<<endl;
	cin>>b2;
//	 cout<<"the sum a and b   "<<sum(a2,b2)<<endl;
//	 cout<<"the sum a and b   "<<multiplication(a2,b2)<<endl;
	 cout<<"the sum a and b is  "<<add(a2,b2)<<endl;
	
	
	
	return 0;

}
 int add(int a,int b )
{
 	 int c = a+b;
	return c;
};
