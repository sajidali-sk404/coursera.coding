#include<iostream>

using namespace std;
	class employee{
		int id;
		int salary;
		public:
			void setdata (void){
				salary = 40000;
				cout<<"enter employee ID "<<endl;
				cin>>id;
			}
			void getdata(void){
				cout<<"employee ID "<<id
				<<endl;
			}
	};

int main(){
	employee wt[6];
	for(int i = 0;i<6;i++){
		wt[i].setdata();
		wt[i].getdata();
	}
	
	

//	sajid.setdata();
//	sajid.getdata();
	
	return 0;
}