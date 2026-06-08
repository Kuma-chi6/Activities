#include <iostream>
#include <cctype>
#include <string>
using namespace std;

int main()
{
    /*Create a program that asks the user for a single character, validate it's a letter (isalpha), then check if it’s a consonant or vowel .*/
    string vowels = "aeiouAEIOU";
    char ch;

    cout << "Enter A Character: ";
    cin >> ch;

    // validates if its a letter
    if(isalpha(ch)){
        // checks if the ch input is true or in the vowels variable
        if(vowels.find(ch) != string::npos){
            cout << "It Is A Vowel" << endl;
        }
        else{
            cout << "It Is A Consonant" << endl;
        }
    }
    else{
        cout << "Invalid Please Input A Letter";
    }

   return 0;
}