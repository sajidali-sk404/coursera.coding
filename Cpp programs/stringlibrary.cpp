#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
//	string str;
	
//	cout<<"Enter address ";
//	cin>>str;
	
//	cout<<str; // print without space

//	getline(cin , str); // print with spaces
//	cout<<str;
  
  
 	// using append function //
 	
//  string s1 = "fam";
//
//  string s2 = "ily";
//  
// s1.append(s2);
// 
// cout<<s1;

		// ***** clrear function ******
	
//	string abc = "aks232445t6y5ewuqfjcvbcxm ";
//	abc.clear();
//	
//	cout<< abc;


	//*****compare and empty function ********//
//	string s1 = "123";
//	string s2 = "123";
//	
////	s1.compare(s2);
////	cout<<"string are equal ";
//
//	s1.clear();
//	if(s1.empty());
//	cout<<"string is empty ";


	
	//********erase, insert,length ,find and substring*********//
	
//	string str1 = "nincompoop";
//	
////	str1.erase(3,2);
////	cout<<str1<<endl;
//
////	cout<<str1.find("com")<<endl;
//
////	str1.insert(2 , "bob");
////	cout<<str1<<endl;
//	
////	cout<<str1.length()<<endl;
//
//	string s = str1.substr(6, 4);
//	cout<<s<<endl;


	//*******convert string to integer and integer to string*******//
	
//	string s1 = "786";
//	int x = stoi(s1);
//	cout<< x+2<<endl;

//	int x = 786;
//	cout<<to_string(x) +"2"<<endl;
	
	
	
	//*******sorting string********//
	//#include<algorithm> library
//	string s1 ="zxccvcbnfdsadfghjkoppowqqwertyuio";
//	
//	sort(s1.begin(), s1.end());
//	
//	cout<<s1<<endl;
//	


	//|#** convert lowercase to uppercase and uppercase to lowercase **#//
	
	char ch;
	cout<<"Enter alphabet : ";
	cin>>ch;
	
//	check for valid alphabet

 (ch>= 'A' && ch<='Z'? ch=ch+32 || ch>='a' && ch<='z':ch= ch - 32);

// char alphabet= ch?(ch>='a' ? ch<='z': ch= ch - 32  ):( ch>= 'A' ? ch<='Z': ch=ch+32 );
 
 cout<<"converted:  "<<ch;


	return 0;
}
