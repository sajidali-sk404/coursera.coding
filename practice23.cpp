#include<iostream>

using namespace std;

int main(){
	char ch;
	
	cout<<"Enter a vowels";
	cin>>ch;
	

     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a vowel.";
    }
 else{
 	 cout<<"its consonant";
 }
	return 0;
}




//
//#include <iostream>
//using namespace std;
//
//int main() {
//    float fahrenheit, celsius;
//
//    cout << "Enter the temperature in Fahrenheit: ";
//    cin >> fahrenheit;
//
//    celsius = (fahrenheit - 32) * 5 / 9;
//
//    cout << fahrenheit << " degrees Fahrenheit is equal to " << celsius << " degrees Celsius.";
//
//    return 0;
//}


//#include <iostream>
//using namespace std;
//
//int main() {
//    int year;
//    cout << "Enter a year: ";
//    cin >> year;
//
//    if (year % 4 == 0) {
//        if (year % 100 == 0) {
//            if (year % 400 == 0)
//                cout << year << " is a leap year.";
//            else
//                cout << year << " is not a leap year.";
//        }
//        else
//            cout << year << " is a leap year.";
//    }
//    else
//        cout << year << " is not a leap year.";
//
//    return 0;
//}

//#include<iostream>
//
//using namespace std;
//
//int main(){
//	int num1,num2,max,mini,equal;
//	cout<<"Enter number1 :";
//	cin>>num1;
//	cout<<"Enter number2 :";
// 	cin>>num2;
// 	max=num1>num2;
// 	mini=num1<num2;
// 	equal=num1==num2;
//	cout<<"MAXIMUM number : "<<max<<endl;
//	cout<<"MINIMUM number : "<<mini<<endl;
//	cout<<"EQUAL number : "<<equal<<endl;
//	
//	

