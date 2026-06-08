#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << endl;

    // Checks the string if it have a upper case and prints it
    cout << "Upper Case: ";
    for(int i = 0; i < str.length(); i++){
        if(isupper(str[i])){
            cout << str[i];
        }
    }
    

    // Checks the string it it have a lower case and prints it
    cout << "Lower Case: ";
    for(int i = 0; i < str.length(); i++){
        if(islower(str[i])){
            cout << str[i];
        }
    }

   return 0;
}