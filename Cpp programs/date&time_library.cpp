#include<iostream>
#include<ctime>

using namespace std;

int main(){
	// current date/time based on current system
	time_t now = time(0);
	
//	convert now to string form 
	char* dt = ctime(&now);
	
	cout<<"current date & time is:  "<<dt<<endl;
	cin.get();
	
	return 0;
}