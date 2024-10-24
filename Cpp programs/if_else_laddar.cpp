#include<iostream>

using namespace std;

int main(){
	int age ;
	cout<<"Enter your age:  ";
	cin>>age;
	
//	if((age >= 18 ) && age <= 40){
//		cout<<"you can come to the party "<<endl;
//		
//	}
//	
//	else if(age > 40 ){
//		cout<<"you are old not access "<<endl;
//		
//	}
//	
//	else if(age < 18){
//		cout<<"you are a child you can not come to the party   ";
//	}
//	

	switch(age){
		case 18:
		{
			cout<<"you csn come to the party  "<<endl;
			break;
			
		case 45:
		cout<<"you are old cannot come to party  "<<endl;
			break;
		case 5:
		
		cout<<"you cannot come to the party your a child "<<endl;
			break;
			
			default:
				cout<<" no special case "<<endl;
		}
	}
	return 0;
}