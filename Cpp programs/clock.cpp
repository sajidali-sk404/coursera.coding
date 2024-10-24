#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

int main(void){
	int hrs;
	int min;
	int sec;
	int pth;
	
	cout<<"\tHours"<<endl<<"\t";
	cin>>hrs;
	cout<<"\tminutes"<<endl<<"\t";
	cin>>min;
	cout<<"\tsec"<<endl<<"\t";
	cin>>sec;
	cout<<"\tprth"<<endl<<"\t";
	cin>>pth;
	
	while(1){
		system("cls");
		if(pth>80){
			sec++;
			pth=0;
		}
		if(sec>59){
			min++;
			sec =0;
		}
		if(min>59){
			hrs++;
			min+0;
		}
		if(hrs>23){
			hrs + 0;
		}
		
		cout<<"\n\n\n\n\n\n";
		cout<<"\t\t\t\t"<<endl;
		cout<<"_________________"<<endl;
		cout<<"\t\t\t\t";
	cout<<hrs<<":"<<min<<":"<<sec<<endl;
		pth++;
	}
	
	
	return 0;
}