#include<iostream>

using namespace std;

		//memory allocation and using arrays//

class shop{
	int itemid[100];
	int itemprice[100];
	int counter;
	
	public:
		void inicounter(){ counter = 0;}
		void setprice(void);
		void displayprice(void);
		
};
	void shop::setprice(){
		cout<<"enter the itemID "<<counter + 1<<endl;
		cin>>itemid[counter];
		cout<<"enter the itemPrice "<<endl;
		cin>>itemprice[counter];
		counter++;
	}
	
	void shop::displayprice(){
		for(int i = 0; i<counter;i++){
			cout<<"the price of item with id "<<itemid[i]<<" itemPrice is "<<itemprice[i]<<endl;
		}
	}

int main(){
	shop dukn[4];
	for(int i = 0;i <4;i++){
		dukn[i].inicounter();
		dukn[i].setprice();
		dukn[i].displayprice();
	}
	
	
//	dukaan.inicounter();
//	dukaan.setprice();
//	dukaan.setprice();
//	dukaan.setprice();
//	dukaan.setprice();
//	dukaan.setprice();
//	dukaan.setprice();
//	dukaan.displayprice();
	
	
	return 0;
}