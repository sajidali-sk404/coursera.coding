#include<iostream>
#include<iomanip>
using namespace std;
 
 
 int glo = 34;
 
 
int main(){
	
	//#*******Sequance structure#*******//
	

   //*******operator precedence*******//
   int a = 10, b = 5;
   
   cout<<(((a*3)+10)-b)+15;
   
    
	
	//*******manuplaters*************//
	
//	int c ,b, d;
//	
//	cout<<"enter c b and d  "<<endl;
//	cin>>c>>b>>d;
//	
//	cout<<"the c is "<<setw(6)<<c<<endl;
//	cout<<"the b is "<<setw(6)<<b<<endl;
//	cout<<"the d is "<<setw(6)<<d<<endl;
//	
	
	//*************Type casting***********//
	
//	int q = 245;
//	float w = 1.34;
//	double e = 3.445;
//	
//	cout<<"int change in float  "<<float(q)<<endl;
//	cout<<"int change in float  "<<(float)q<<endl;
//	cout<<"float change in int  "<<int(w)<<endl;
//	cout<<"float change in int  "<<(int)w<<endl;
//	cout<<"double change in float  "<<float(e)<<endl;
//	cout<<"double change in int  "<<int(e)<<endl;
	
	
	//**************refrence veriable************//
	
//	int a = 34;
//	int y = a;
//   cout<<a;	
//	cout<<y;
	
	
     //************literals************//
     
//	int glo = 23;
//	float a = 1.23;
//	char b = 'd';
//	bool c = true;
//	double  d = 3.3444;
//	
//	cout<<"the size of glo "<<sizeof(23)<<endl;
//	cout<<"the size of a "<<sizeof(1.23f)<<endl;
//	cout<<"the size of b "<<sizeof('d')<<endl;
//	cout<<"the size of c "<<sizeof(true)<<endl;
//	cout<<"the size of d "<<sizeof(3.3444d)<<endl;
//	
//	 //************ call by global veriable**********//

//	cout<<"the value of glo is ="<< glo <<endl;
//	cout<<"the global value of glo is ="<< ::glo <<endl;
//	
	
	
	return 0 ;
}