#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	
	
//	 // ************* 6 table ***********
	
	for(int i = 0 ; i <= 16; i++){
		
		cout<<"6 * " <<i<<" =  "<<setw(4)<<i*6<<endl;
	}
	
//	
//	 // ************* 7 table ***********
//	 
	 cout<<endl<<endl<<endl;
	
	int i = 0;
	while(i<=16){
		
		cout<<"7 * "<<i<<" = "<<setw(4)<<i*7<<endl;
		i++;
	}
	
//	 // ************** 14 table ***********
//	 
	 cout<<endl<<endl<<endl;
	 int s = 1;
	 do{
		cout<<"14 * "<<s<<" = "<<setw(4)<<s*14<<endl;
	 	s++;
	 }while(s<=16);
	 
	 
	return 0;
}