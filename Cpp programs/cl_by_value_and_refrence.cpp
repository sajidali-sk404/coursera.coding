#include<iostream>
using namespace std;


void swap(int a,int b){
	int temp = a;
	a = b;
	b = temp;
}

void swapP(int* q,int* e){
	int t = *q;
	*q = *e;
	*e = t;
}
int main(){
	
	int x = 5, y = 7;
	cout<<"this will not swap"<<endl;
	swap(x,y);
	cout<<"the value of x "<<x<<"\nthe value of y "<<y<<endl; //this will not swap value
	cout<<"this is swap"<<endl;
	swapP(&x,&y);
	cout<<"the value of x "<<x<<"\nthe value of y "<<y<<endl; 
	
	return 0;
}