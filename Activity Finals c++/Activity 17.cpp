#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string sent;
    int alph = 0;
    int dgt = 0;
    int spc = 0;
    int punc = 0;

    cout << "Enter a sentence: ";
    getline(cin, sent);

    // counts how many characters are in the sentence
    for(int i = 0; i < sent.length(); i++){
        if(isalpha(sent[i])){
            alph++;
        }
    }

    // counts how many digits are in the sentence
    for(int i = 0; i < sent.length(); i++){
        if(isdigit(sent[i])){
            dgt++;
        }
    }

    // counts how many white spaces are in the sentence
    for(int i = 0; i < sent.length(); i++){
        if(isspace(sent[i])){
            spc++;
        }
    }

    // counts how many special characters are in the sentence
    for(int i = 0; i < sent.length(); i++){
        if(ispunct(sent[i])){
            punc++;
        }
    }

    // prints the total
    cout << "Alphabetic characters: " << alph << endl;
    cout << "Digits: " << dgt << endl;
    cout << "White Spaces: " << spc << endl;
    cout << "Punctuation: " << punc << endl;

   return 0;
}