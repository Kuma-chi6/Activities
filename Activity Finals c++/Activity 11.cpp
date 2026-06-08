#include <iostream>
using namespace std;

int main()
{
    string names[10] = {
        "Ramon", "Clark", "Cardo", "Aliyah", "Mark", 
        "Darlene", "Vianca", "Kim", "Kyle", "Crystelle"
    };
    string *p = names;

    // Print the Index, Address, and Values of the array
    cout << "Index" << " " << " " << "Address" << " " << " " << " " << " " <<  "Value" << endl;
    for(int i = 0; i < 10; i++){
        cout << i << " " <<  " " << " " << &names[i] << " " << " " << names[i] << endl;
    }

    cout << endl;

    // Lets user input 10 new names as new values
    cout << "Enter 10 new names" << endl;
    for(int i = 0; i < 10; i++){
        cout << i + 1 << ": ";
        getline(cin, p[i]);
    }

    cout << endl;

    // Print the New updated name values
    cout << "UPDATED NAME VALUES\n";
    cout << "Index" << " " << " " << "Address" << " " << " " << " " << " " <<  "Value" << endl;
    for(int i = 0; i < 10; i++){
        cout << i << " " <<  " " << " " << &names[i] << " " << " " << p[i] << endl;
    }

   return 0;
}