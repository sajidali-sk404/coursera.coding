#include<iostream>
#include<iostream>

using namespace std;

class binary{
	string s;
	void chk_b(void);
	public:
		void read (void);
//		void chk_b(void);
		void ones_compliment(void);
		void display(void);
};
		
		void binary :: read(void){
			cout<<"Enter binary number  "<<endl;
			cin>>s;
			}
			
			void binary::chk_b(){
			for(int i = 0; i<s.length();i++){
				if(s.at(i)!='0' && s.at(i) != '1' ){
					cout<<"incorrect binary number ";
					exit(0);
				}
			}
		}
		void binary::ones_compliment(){
			chk_b();	// this is nesting of member function//
		for(int i = 0; i <s.length(); i++){
			if (s.at(i) == '0' ){
				s.at(i) = '1';
			}
			else {
				s.at(i) = '0';
			}
		}
		}
		void binary::display() {
			cout<<"display your binary number "<<endl;
			for(int i = 0; i<s.length();i++){
				cout<<s.at(i);
			}
			cout<<endl;
		}

int main(){
	binary b;
	b.read();
//	b.chk_b();
	b.display();
	b.ones_compliment();
	b.display();
	
	
	
	return 0;
}