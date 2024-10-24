#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a single digit number from 0 to 9: ";
    cin >> num;
    switch(num) {
        case 0:
            cout << "Zero";
            break;
        case 1:
            cout << "One";
            break;
        case 2:
            cout << "Two";
            break;
        case 3:
            cout << "Three";
            break;
        case 4:
            cout << "Four";
            break;
        case 5:
            cout << "Five";
            break;
        case 6:
            cout << "Six";
            break;
        case 7:
            cout << "Seven";
            break;
        case 8:
            cout << "Eight";
            break;
        case 9:
            cout << "nine";
            break;
         default:
        	cout<<"not specail number:";
        }
         
        
        return 0;
}