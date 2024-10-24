#include<iostream>

using namespace std;
  
  class employee{
  	int id;
  	static int count;
  	
  	
  	public: 
  	void setdata(void){
  		cout<<"enter the id "<<endl;
  		cin>>id;
  		count++;
  		
	  }
  	void getdata(){
  		cout<<"the id of employee is  "<<id<<"  and the number of employee "<<count<<endl;
  	
  	
	  }
 	static void getcount(void){
  	cout<<"the value of count is "<<count<<endl;
    }
  };
  
  	int employee :: count;
  	
int main(){
	
	employee sajid,dua,wajid;
	
	sajid.setdata();
	sajid.getdata();
	employee::getcount();
	
	dua.setdata();
	dua.getdata();
	employee::getcount();
	
	wajid.setdata();
	wajid.getdata();
	employee::getcount();
	
	
	
	return 0;
}