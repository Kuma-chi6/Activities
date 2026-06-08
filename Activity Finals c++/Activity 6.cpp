#include <iostream>
using namespace std;

int main()
{
    string brand[1][2];
    string color[1][2];
    int quantity[1][2];


    // Will ask to input the Car data
    for(int row = 0; row < 1; row++){
        for(int column = 0; column < 2; column++){
            cout << "Enter Car Brand: ";
            cin >> brand[row][column];
            cout << "Enter Car Color: ";
            cin >> color[row][column];
            cout << "Enter Car Quantity: ";
            cin >> quantity[row][column];
            cout << endl;
        }
        cout << endl;
    }

    
     for(int row = 0; row < 1; row++){
        for(int column = 0; column < 2; column++){
            cout << "Car " << column + 1 << endl;
            cout << "car [" << row << "][" << column << "] Brand: " << brand[row][column] << endl;
            cout << "car [" << row << "][" << column << "] Color: " << color[row][column] << endl;
            cout << "car [" << row << "][" << column << "] Quantity: " << quantity[row][column] << endl;
            cout << endl;
        }
    }

   return 0;
}