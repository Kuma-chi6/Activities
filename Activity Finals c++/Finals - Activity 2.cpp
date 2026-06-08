#include <iostream>
using namespace std;

// Finals - Activity 2

int main()
{
    int numbers[100];
    int size = 0;
    string input;
    
    cout << "Enter Numbers (Type END to stop): ";
    
    while(true){
        cin >> input;
        
        if(input == "END" || input == "end"){
            break;
        }
        
        int num = 0;
        
        for(int i = 0; i < input.length(); i++){
            num = num * 10 + (input[i] - '0');
        }
        numbers[size] = num;
        size++;
    }

    
    cout << "Array contents are" << endl;
    for(int i = 0; i < size; i++){
        cout << "Numbers: [" << i + 1 << "] " << numbers[i] << endl; 
    }
    
    return 0;
}