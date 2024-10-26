
#include <iostream>
using namespace std;

int main() {
    int n, t1 = 0, t2 = 1, nextTerm = 0;

    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; ++i) {
        // Prints the first two terms.
        if(i == 1) {
            cout << t1 << ", ";
            continue;
        }
        if(i == 2) {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        cout << nextTerm << ", ";
    }
    return 0;
}








//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int num, sum;
//    sum = 0;
//
//    cout << "Enter a positive integer: ";
//    cin >> num;
//
//    for (int i = 1; i <= num; ++i) {
//        sum += i;
//    }
//
//    cout << "Sum = " << sum << endl;
//
//    return 0;
//}




//#include <iostream>
//using namespace std;
//
//int main() {
//    char c;
//    bool isLowercaseVowel, isUppercaseVowel;
//
//    cout << "Enter an alphabet: ";
//    cin >> c;
//
//    // evaluates to 1 (true) if c is a lowercase vowel
//    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
//
//    // evaluates to 1 (true) if c is an uppercase vowel
//    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
//
//    // show error message if c is not an alphabet
////    if (!isalpha(c))
////      printf("Error! Non-alphabetic character.");
//    if (isLowercaseVowel || isUppercaseVowel)
//        cout << c << " is a vowel.";
//    else
//        cout << c << " is a consonant.";
//
//    return 0;
//}
//


//#include<iostream>
//
//using namespace std;
//
//int main(){
//	int arr[10],count =0;
//	
//	for(int i = 0;i<10;i++){
//	
//	cout<<"Enter any numbers:  ";
//	cin>>arr[i];
//	
//	if(arr[i] >= 10)
//		count++;
//		
//}
//	cout<<"Greater than 10  "<<count<<endl;
//
//return 0;
//}

