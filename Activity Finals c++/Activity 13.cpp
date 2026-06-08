#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    string sent;
    int count = 0;

    cout << "Enter a sentence: ";
    getline(cin, sent);

    // check every character and count the numbers in it
    for(int i = 0; i < sent.length(); i++){
        if(isdigit(sent[i])){
            count++;
        }
    }

    cout << "Number of digits: " << count << endl;

   return 0;
}