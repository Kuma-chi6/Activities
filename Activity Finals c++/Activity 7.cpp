#include <iostream>
using namespace std;

int main()
{
    /*Create a program that will ask for 3 sets of data with 10 number components then display the similar data.*/
    int arr[3][10];

    // Will ask to input to the sets of data
    for(int row = 0; row < 3; row++){
        cout << "Enter the data for set " << row + 1 << endl;
        
        // Will ask to input the value of the column data
        for(int column = 0; column < 10; column++){
            cout << "Arr[" << column << "]: ";
            cin >> arr[row][column];
        }
        cout << endl;
    }

    // Will print the value of the 3 sets of data
    for(int row = 0; row < 3; row++){
        cout << "Enter the data for set " << row + 1 << endl;
        
        for(int column = 0; column < 10; column++){
            cout << "Arr[" << row << "][" << column << "]: " << arr[row][column] << endl;
        }
        cout << endl;
    }

   return 0;
}