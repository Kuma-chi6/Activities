#include <iostream>
using namespace std;

// Finals - Activity 3

int main(){
    
    char choice = 'y';
    
    while(choice == 'y' || choice == 'Y'){
    
        int value[15];
            cout << "Enter 15 values to duplicate: " << endl;
        
            for(int i = 0; i < 15; i++){
                cout << "Number [" << i + 1 << "]: ";
                cin >> value[i];
            }
        
            cout << "Duplicating Values: " << endl;
            for(int i = 0; i < 15; i++){
                int duplicated = value[i] * 2;

                cout << "Duplicated Values[" << i + 1 << "] " << duplicated << endl;
            
            }
            cout << "Do you want to enter another 15 values? (y) (n): ";
            cin >> choice;
    }
    cout << "Bye byee";
    return 0;
}