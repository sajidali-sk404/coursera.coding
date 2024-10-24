#include<iostream>
#include<string>


using namespace std;
class animal{
	int legs;
	int ponch;
	string sound;
	public:
		int eye;
		int ear;
		void setdata(int l = 4,int p = 1,string s = "burk"){
			legs = l;
			ponch = p;
			sound = s;;
			
//			l = 4;
//			p = 1;
//			s = 'burk';
			
			
			}
			void getdata();
};
 void animal :: getdata(void){
		
//		setdata(4 , 1, "burk"); //
		setdata();//constructter
 	cout<<"The animal legs is : "<<legs<<endl;
 	cout<<"The animal ponch is : "<<ponch<<endl;
 	cout<<"The animal sound is : "<<sound<<endl;
 	cout<<"The animal ears is : "<<ear<<endl;
 	cout<<"The animal eyes is : "<<eye<<endl;	
 }

int main(){
	animal dog;
	dog.eye = 2;
	dog.ear = 2;
	dog.getdata();
	
	return 0;
}