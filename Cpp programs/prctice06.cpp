#include<iostream>

using namespace std;
class shop{
	int ItemID[10];
	int ItemPrice[10];
    static int counter;
	public:
		void initcounter(){counter = 0 ;}
		void setprice();
		void desplay();
	
};

void shop :: setprice(){
	cout<<"Enter the ItemId:  "<<counter+1<<endl;;
	cin>>ItemID[counter];
	cout<<"Enter the ItemPrice:  "<<counter<<endl;
	cin>>ItemPrice[counter];
	counter++;
}

void shop :: desplay(){
	for(int i = 0 ; i < counter ; i++)
	
	cout<<"The ID of item is:  "<<ItemID[i]<<endl<<"The Price of Item is:  "<<ItemPrice[i]<<endl;
	
}
		void getcount(){
			cout<<"The value of count is : "<<counter<<endl;
		}
 

int shop :: counter = 100;

int main(){
//	shop dukn[10];
////	for(int i =0 ; i<10;i++){
//		
//	dukn[10].initcounter();
////	 shop :: getcount();
//	dukn[10].setprice();
////	 shop :: getcount();
//	dukn[10].desplay();
//	 shop :: getcount();
//	}
//	
	shop sajid,wajid, dukn;
	
	sajid.setprice();
	sajid.desplay();
	shop :: getcount();
	
	return 0;
}