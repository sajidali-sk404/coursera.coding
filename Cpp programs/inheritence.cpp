#include<iostream>

using namespace std;

class base{
	int a;
	public:
		void setdata(int a1){
			a = a1;
		}
		
};

class derived : public base{
	int a;
	public:
		void setdervd(int a2){
			a = a2;	
		}
		void getdata(){
			cout<<a;
			cout<<a;
		}
};


int main(){
	derived sajid;
	sajid.setdata(23);
	sajid.setdervd(12);
	sajid.getdata();
	
	
	return 0;
}