#include <iostream>
using namespace std;

int main()
{
    int arr[2][10];

    // Will ask to input the value of the data
    for(int row = 0; row < 2; row++){
        for(int column = 0; column < 10; column++){
            cout << "Arr[" << row << "][" << column << "]: ";
            cin >> arr[row][column];
        }
        cout << endl;
    }

    // Will Print the postiive numbers
    cout << "Positive Numbers" << endl;
    for(int row = 0; row < 2; row++){
        for(int column = 0; column < 10; column++){
            // Will search for the numbers in the data that is not less than 0
            if(arr[row][column] >= 0){
               cout << "Arr[" << row << "][" << column << "]: " << arr[row][column] << endl; 
            }
        }
    }

    // create a space for a cleaner look
    cout << endl;

    // Print the negatiave numbers
    cout << "Negative Numbers" << endl;
    for(int row = 0; row < 2; row++){
        for(int column = 0; column < 10; column++){
            // Will search for the nubmers in the data that is less than 0
            if(arr[row][column] < 0){
               cout << "Arr[" << row << "][" << column << "]: " << arr[row][column] << endl; 
            }
        }
    }

   return 0;
}