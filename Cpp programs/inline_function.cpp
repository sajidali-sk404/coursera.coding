#include<iostream>
using namespace std;

	//****inline function***//
	
	
inline int product(int a,int b){
	return a*b+2;
	
}
float moneyrecieved(int curentmoney, float factor = 1.04){
	return curentmoney*factor;
}

int main(){
int a =3,b = 5;
int money;
cout<<"enter your money ";
cin>>money;
cout<<"if you have money "<<money<<" in your bank account "<<moneyrecieved(money)<<"you recieved after one year "<<endl;
cout<<"The value of a and b "<<product(a,b)<<endl;	
cout<<"The value of a and b "<<product(a,b)<<endl;	
cout<<"The value of a and b "<<product(a,b)<<endl;	
	
	
	return 0;
}