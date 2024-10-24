#include<iostream>
using namespace std;

int main(){
	
	int yr,mn,wk,day,hr;
	
	cout<<"Enter hours";
	cin>>hr;
	
	yr = hr/8640;
	hr = hr%8640;
	
	mn = hr/720;
	hr = hr%720;
	
	wk = hr/168;
	hr = hr%168;
	
	day = hr/24;
	hr = hr%24;
	
	cout<<"years = "<<yr<<endl;
	
	cout<<"months = "<<mn<<endl;
	
	cout<<"weeks = "<<wk<<endl;
	
	cout<<"days = "<<day<<endl;
	
	cout<<"hours = "<<hr<<endl;
	
	
	
	
	
	
	
	
	return 0;
}