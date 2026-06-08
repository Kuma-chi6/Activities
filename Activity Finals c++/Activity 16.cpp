#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string password;
    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigit = false;
    bool hasSpecial = false;

    cout << "Enter your password: ";
    cin >> password;

    // Checks if the condition is met for the bool to be true
    for(int i = 0; i < password.length(); i++){
        if(isupper(password[i])){
            hasUpper = true;
        }
        else if(islower(password[i])){
            hasLower = true;
        }
        else if(isdigit(password[i])){
            hasDigit = true;
        }
        if(ispunct(password[i])){
            hasSpecial = true;
        }
    }

    // validates the password if it met the conditions 
    if(hasUpper && hasLower && hasDigit && hasSpecial){
            cout << "Valid Password" << endl;
        }
        else{
            cout << "Invalid Password";
        }

   return 0;
}