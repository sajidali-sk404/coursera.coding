#include<iostream>

using namespace std;

int main(){
	
	int dd,mm,yr;
	
     long int  year, mn,week , day, hour, min, second;
	 
	  cout<<"Enter your Date of Birth ";
	  cin>>dd>>mm>>yr;
	  
	  year = dd + mm + yr/365;
	  
	  
	  mn  = dd + mm + yr*12/30;
	  
	  week = dd + mm + yr*5/7;
	  
	  day = dd + mm + yr*60/24;
	  
	  hour = dd + mm + yr*24/60;
	  
	  min = dd + mm + yr*1440/60;
	  
	  second = dd + mm + yr*86400/60;
	  
	  
	  
	  
	  
	  cout<<"your  years is  = "<<year<<endl;
	  cout<<"your  months is  = "<<mn<<endl;
	  cout<<"your  weeks is  = "<<week<<endl;
	  
	  cout<<"your  days is  = "<<day<<endl;
	  cout<<"your  hours is  = "<<hour<<endl;
	  
	  cout<<"your  minutes is  = "<<min<<endl;
	  
	  cout<<"your seconds is  = "<<second<<endl;
	
	
	
	return 0;
}