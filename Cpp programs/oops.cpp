#include<iostream>
#include<string>

using namespace std;

class student{
	private:
		int ID;
		string NAME;
	public:
		int class_no, fees;
		
	void setdata (int id,string name);
	void getdata (){
		cout<<"the student id  "<<ID<<endl;
		cout<<"the student name  "<<NAME<<endl;
		cout<<"the student class no "<<class_no<<endl;
		cout<<"the student fees  "<<fees<<endl;
	}
		
};
 	void student :: setdata(int id, string name){
 		ID = id;
 		NAME = name;
	 }
//class employee {
//	private:
//		
//	int a,b,c;
//	public:
//		
//		int d,e;
//		void setdata(int a1, int b1, int c1);
//			
//		
//		
//		void getdata(){
//			cout<<"The value of a "<<a<<endl;
//			cout<<"The value of b "<<b<<endl;
//			cout<<"The value of c "<<c<<endl;
//			cout<<"The value of d "<<d<<endl;
//			cout<<"The value of e "<<e<<endl;
//		}
//	
//};
//	void employee :: setdata(int a1,int b1,int c1){
//		a = a1;
//		b = b1;
//		c = c1;
//		
//	}

int main(){
	student sajid;
	
	sajid.class_no = 35;
	sajid.fees  = 2500;
	
	sajid.setdata(1, "sajidv");
	sajid.getdata();
	
	
	
	
//	employee sajid;
//	sajid.d = 35;
//	sajid.e = 66;
//	sajid.setdata(2,3,7);
//	sajid.getdata();
//	
//	 
	
	return 0;
}