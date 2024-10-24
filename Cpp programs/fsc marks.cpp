#include<iostream>

using namespace std;

int main(){
	
	int cs, maths, physics, eng, urdu, pak_study,islamyat, obtained_marks;
	
	double  percentage, avg;
	
	int total = 1100;
	
	cout<<"Enter your fsc marks part 1 & part 2 "<<endl<<endl;
	
	
	cout<<"enter the computer science marks = "<<endl;
	
	cin>>cs;
	
	cout<<"enter the maths marks = "<<endl;
	
		cin>>maths;
		
	cout<<"enter the physics marks = "<<endl;
	
		cin>>physics;
		
	cout<<"enter the english marks = "<<endl;
	
		cin>>eng;
		
	cout<<"enter the urdu marks = "<<endl;
	
		cin>>urdu;
		
	cout<<"enter the pak study marks = "<<endl;
	
		cin>>pak_study;
		
	cout<<"enter the islamyat marks = "<<endl;
	
		cin>>islamyat;
		
	obtained_marks=   cs + maths + physics + eng + urdu + pak_study + islamyat; 
	

		
		percentage = (obtained_marks*100)/(double)total;
		
		avg = obtained_marks/(float)7;
		
		cout<<endl<<endl;
		
		cout<<"------------ your fsc marks ------------"<<endl;
		
	    	cout<<"            Subject \t \t  Marks "<<endl;
		
	cout<<"your computer science marks is = \t"<<cs<<endl;
		
	cout<<"your maths marks is =            \t"<<maths<<endl;
		
	cout<<"your physics marks is =          \t"<<physics<<endl;
		
	cout<<"your english marks is =          \t"<<eng<<endl;
		
	cout<<"your urdu marks is =             \t"<<urdu<<endl;
		
	cout<<"your pak study marks is =        \t"<<pak_study<<endl;
		
	cout<<"your islamyat marks is =         \t"<<islamyat<<endl;
	
	cout<<"_______________________________________________________________"<<endl<<endl;
	
	cout<<"your total marks is = "<<obtained_marks<<endl;

	cout<<"average is = "<<avg<<endl;

	cout<<"percentage is = "<<percentage<<endl;
	
	
	
	
	return 0;
	
}