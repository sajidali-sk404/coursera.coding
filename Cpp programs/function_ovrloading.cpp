#include<iostream>
using namespace std;


    	//***function over loading***//
    	
//int sum(int a, int b){
//	cout<<"using 2 argumnts "<<endl;
//	return a+b;
//	
//}
//int sum(int a,int b,int c){
//	cout<<"using 3 argumnts "<<endl;
//	return a+b+c;
//}

int volume(double r,int h){
	return (3.14 *r*r*h);
}
int volume(int a){
	return (a*a*a); 
}

int volume(int l,int b,int h){
	return (l*b*h);
}

int main(){
	
	cout<<"the volume of clinder redius 4 and hight 7 is "<<volume(4,7)<<endl;
	cout<<"the volume of cuboid of 3 6 and 7 is  "<<volume(3,6,7)<<endl;
	cout<<"the volume of cube of side 3 "<<volume(4)<<endl;
	
//	cout<<"the sum of a and b "<<sum(12,5)<<endl;
//	cout<<"the sum of a b and c  "<<sum(10,20,30)<<endl;
	
	return 0;
}