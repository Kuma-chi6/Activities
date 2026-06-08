#include <iostream>
using namespace std;

// Finals - Acctivity 1 

int main()
{
    string name[10];
    char choice;
start:

    cout << "Intir 10 names" << endl;
    
    for(int i = 0; i < 10; i++){
        cout << "Name " << i + 1 << ": ";
        getline(cin, name[i]);
    }
    
    cout << "Disney Play" << endl;
    
    for(int i = 0; i < 10; i++){
        cout << "Name [" << i + 1 << "]: " << name[i] << endl;
    }
    
    cout << "Do you want to enter another set of names? (y/n): ";
    cin >> choice;
    cin.ignore();

    if(choice == 'y' || choice == 'Y'){
        goto start;
    }
    cout << "BYEE BYEE";

    return 0;
}