#include <iostream>
using namespace std;

int main()
{
    /*Create a program that will ask for two sets of array that consist of 5 number values. Display the sum of paired array number.*/

    int arr1[5];
    int arr2[5];

    // Will add the values on the two arrays
    int sum[5];

    // Will ask to input 5 values to the first array
    cout << "Enter 5 values for the first array" << endl; 
    for(int i = 0; i < 5; i++){
        cout << "Arr[" << i << "]: ";
        cin >> arr1[i];
    }

    cout << endl;

    // Will ask to input 5 values to the second array
    cout << "Enter 5 values for the second array" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Arr[" << i  << "]: ";
        cin >> arr2[i];
    }

    cout << endl;

    // Calculate the sum
    for(int i = 0; i < 5; i++){
        sum[i] = arr1[i] + arr2[i];
    }

    cout << endl;

    // Will print the sum of the two values
    cout << "Sum of the paired elements" << endl;
    for(int i = 0; i < 5; i++){
        cout << "Arr[" << i << "]: " << sum[i];
        cout << endl;
    }

   return 0;
}