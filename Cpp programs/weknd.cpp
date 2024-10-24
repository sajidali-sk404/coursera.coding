#include<iostream>

using namespace std;

int main(){
	
	cout<<"\t Hello, welcome to Sajju carpet cleaning service "<<endl;
	int small_rooms{0};
	cout<<"\n How many small rooms whould you like cleaned?";
	cin>>small_rooms;
	
	int large_rooms{0};
	cout<<"\n How many large rooms whould you like cleaned?";
	cin>>large_rooms;
	
	const double price_per_small_room {25.0};
	const double price_per_large_room {25.0};

	const double sales_tax {0.06};

	const int estimate_expiry {30};//days
	
	cout<<"\n Estimate for carpet cleaning service "<<endl;
	cout<<"Number of small rooms"<<small_rooms<<endl;
	cout<<"Number of large rooms"<<large_rooms<<endl;
	
	cout<<"Price per small rooms: $"<<price_per_small_room<<endl;
	cout<<"Price per large rooms: $"<<price_per_large_room<<endl;
	
	cout<<"Cost : $"<<(price_per_small_room * small_rooms )+(price_per_large_room * large_rooms)<<endl;
	
	cout<<"Tax : $"<<((price_per_small_room * small_rooms)+(price_per_large_room * large_rooms))*sales_tax <<endl;
	
	
	cout<<"+__________+_______________________________+_______________+"<<endl;
	
	
	cout<<"Totall estimate: $"<<((price_per_small_room * small_rooms)+(price_per_large_room*large_rooms))+
	                (((price_per_small_room * small_rooms)+(price_per_large_room*large_rooms))*sales_tax)<<endl;
					
	cout<<"This estimate is valid for "<<estimate_expiry<<"days  "<<endl;
	
	
	
	
	
	return 0;
}