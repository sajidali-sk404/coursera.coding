#include <iostream>

using namespace std;

int main() {
    int num1, num2, num3, num4, max;

    cout << "Enter four integers: ";
    cin >> num1 >> num2 >> num3 >> num4;

    // Check for maximum value using nested if structure
    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4) {
                max = num1;
            }
            else {
                max = num4;
            }
        }
        else {
            if (num3 > num4) {
                max = num3;
            }
            else {
                max = num4;
            }
        }
    }
    else {
        if (num2 > num3) {
            if (num2 > num4){
            	max = num2;
			}
			else{
				max = num4;
			}
		}
	}
			cout<<"YOur largest number is:  "<<max<<endl;
			
			return 0;
}