#include<iostream>

using namespace std;

int main(){
	
   int a = 25, b = 35;
	 
	 int c, e , cost;
	 
	int rm1,rm2;
	
	float t = 6.6;
	
	cout<<endl<<endl;
	
	cout<<"\t\t Hello,welcome to Farooq Shah carpet cleaning service "<<endl<<endl;
	
	cout<< "How many small rooms would you like cleaned ?  ";
	
	cin>>rm1;
	
	cout<< "How many small rooms would you like cleaned ?  ";
	
	cin>>rm2;
	
	cout<<endl;
	
	cout<<"\t charges for carpet cleaning service "<<endl<<endl;
	
	cout<<"number of small rooms : "<<rm1<<endl;
	
	cout<<"number of large rooms : "<<rm2<<endl;
	
	cout<<"Price of the small room   : $"<<a<<endl;
	
	cout<<"Price of the large room   : $"<<b<<endl;
	
	
	
   c =  a*rm1;
   e =  b*rm2;  
    cost = c+e;
	
	
	
	cout<<"cost :  $"<<cost<<endl;
	cout<<"tax : $"<<t<<endl;
	
	cout<<"__________________________________________________________";
	cout<<"__________________________________________________________"<<endl<<endl;
	
	cout<<"total amount :   $"<<cost+t<<endl;
	 
	cout<<"This is valid for 30 days "<<endl<<endl;
	
	cout<<"\t\t\t\t\t programmer Name :  \t Farooq Shah  "<<endl;
	
	cout<<"\t\t\t\t\t  class no     :\t 11  "<<endl<<endl;
	
	return 0;
	
}