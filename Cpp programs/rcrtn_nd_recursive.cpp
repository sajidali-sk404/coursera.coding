#include<iostream>
using namespace std;


	//***Recursion and recusive function***//


//int factorial(int n)



//  {
//	if (n<=1){
//		
//		return 1;
//	}
//	return n*factorial(n-1);
//}

    int fib(int a){
	if (a < 2){
		return 1;
	}
	return fib(a - 2) + fib(a-1);
  }

int main(){
	int a;
	cout<<"enter number ";
	cin>>a;
//	cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
	cout<<"The  term of fibnacci sequance  position  "<<a<<" is "<<fib(a);
	
	return 0;
}