
#include<iostream>
using namespace std;
int main()
{
    int rowOne, colOne, rowTwo, colTwo, i, j;
    int mat1[10][10], mat2[10][10], sum=0;
    cout<<"Enter Row and Column Size of First Matrix: ";
    cin>>rowOne>>colOne;
    cout<<"Enter Row and Column Size of Second Matrix: ";
    cin>>rowTwo>>colTwo;
    if(rowOne==rowTwo && colOne==colTwo)
    {
        cout<<"\nEnter "<<rowOne<<"*"<<colOne<<" First Matrix Elements: ";
        for(i=0; i<rowOne; i++)
        {
            for(j=0; j<colOne; j++)
                cin>>mat1[i][j];
        }
        cout<<"Enter "<<rowTwo<<"*"<<colTwo<<" Second Matrix Elements: ";
        for(i=0; i<rowOne; i++)
        {
            for(j=0; j<colTwo; j++)
                cin>>mat2[i][j];
        }
        cout<<"\nAddition Result of Two Given Matrix is:\n";
        for(i=0; i<rowTwo; i++)
        {
            for(j=0; j<colOne; j++)
            {
                sum = mat1[i][j]+mat2[i][j];
                cout<<sum<<"  ";
            }
            cout<<endl;
        }
    }
    else
        cout<<"\nSize Mismatched!\n";
    return 0;
}

//#include <iostream>
//using namespace std;
//
//int main() {
//    const int ROWS = 2;
//    const int COLS = 2;
//    int matrix1[ROWS][COLS] = {{1, 2}, {3, 4}};
//    int matrix2[ROWS][COLS] = {{5, 6}, {7, 8}};
//    int result[ROWS][COLS];
//
//    // Add the matrices element by element
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j < COLS; j++) {
//            result[i][j] = matrix1[i][j] + matrix2[i][j];
//        }
//    }
//
//    // Print the matrices
//    cout << "Matrix 1:" << endl;
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j < COLS; j++) {
//            cout << matrix1[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    cout << "Matrix 2:" << endl;
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j < COLS; j++) {
//            cout << matrix2[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    cout << "Result:" << endl;
//    for (int i = 0; i < ROWS; i++) {
//        for (int j = 0; j < COLS; j++) {
//            cout << result[i][j] << " ";
//        }
//        cout << endl;
//    }
//
//    return 0;
//}


//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//    // seed the random number generator with the current time
//    srand(time(NULL));
//
//    // generate and print five random numbers between 0 and 99
//    for (int i = 0; i < 5; i++) {
//        int randomNumber = rand() % 100; // generate a random number between 0 and 99
//        cout << "Random Number " << i+1 << ": " << randomNumber << endl;
//    }
//
//    return 0;
//}
//


//#include <iostream>
//#include <ctime>
//
//using namespace std;
//
//int main() {
//    // get the current time
//    time_t currentTime = time(0);
//
//    // convert the current time to a string
//    char* timeString = ctime(&currentTime);
//
//    // print out the current time
//    cout << "The current time is: " << timeString;
//
//    return 0;
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//    int num, i;
//    bool isPrime = true;
//
//    cout << "Enter a positive integer: ";
//    cin >> num;
//
//    for (i = 2; i <= num / 2; i++) {
//        if (num % i == 0) {
//            isPrime = false;
//            break;
//        }
//    }
//
//    if (isPrime)
//        cout << num << " is a prime number.";
//    else
//        cout << num << " is a composite number.";
//
//    return 0;
//}
