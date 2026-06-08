#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string name, result;

    cout << "Enter name: ";
    cin >> name;

    // check for each character if its a letter print it
    cout << "Alpha is: ";
    for(int i = 0; i < name.length(); i++){
        if (isalpha(name[i])){
            cout << name[i];
        }
    } 

    cout << endl;

   return 0;
}