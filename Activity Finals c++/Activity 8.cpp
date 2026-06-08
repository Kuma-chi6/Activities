#include <iostream>
using namespace std;

int main()
{
   int arr[2][10];

   // Will ask to input the sets of data
   for(int row = 0; row < 2; row++){
    cout << "Enter the value of set " << row + 1;
    
    // create some space for a cleaner look
    cout << endl;

    // Will ask to input the value of the column data
    for(int column = 0; column < 10; column++){
        cout << "Arr[" << column << "]: ";
        cin >> arr[row][column];
    }
    cout << endl;
   }

   // Print the even numbers
   cout << "Even numbers" << endl;
   for(int row = 0; row < 2; row++){
    for(int column = 0; column < 10; column++){
        // creates a condition that if its divisible by 2 its even
        if(arr[row][column] % 2 == 0){
            cout << "Arr[" << row << "][" << column << "]: " << arr[row][column] << endl;
        }
    }
   }

   // create a space for a cleaner look
   cout << endl;

   // Print the ood number
cout << "Odd numbers" << endl;
   for(int row = 0; row < 2; row++){
    for(int column = 0; column < 10; column++){
        // creates a condition that if its divisible by 2 its even
        if(arr[row][column] % 2 != 0){
            cout << "Arr[" << row << "][" << column << "]: " << arr[row][column] << endl;
        }
    }
   }

   return 0;
}