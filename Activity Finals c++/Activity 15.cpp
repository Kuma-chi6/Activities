#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string name, up;

    cout << "Enter your name: ";
    getline(cin, name);

    cout << "Converted To Upper: ";
    for(int i = 0; i < name.length(); i++){
        up = toupper(name[i]);
        cout << up;
    }

   return 0;
}