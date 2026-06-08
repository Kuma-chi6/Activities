#include <iostream>
using namespace std;

int main()
{
    /*Create a program that will execute the following:
    1.Declare variables Num1, Num2, Num3 and Num4 as int
    2.Display the address of variables Num1, Num2, Num3 and Num4
    3. Assign Num1 with a value of 10 and Num2 with a value of 23
    4. Using pointer, assign the value of Num1 to Num3
    5. Display the value of Num3
    6. Assign the address of Num2 to Num4
    7. Display the value of Num4 */

    int *p, Num1 = 10, Num2 = 23, Num3, *Num4;

    // Display the Address
    cout << "Adress of Num1: " <<  &Num1 << endl;
    cout << "Adress of Num2: " <<  &Num2 << endl;
    cout << "Adress of Num3: " <<  &Num3 << endl;
    cout << "Adress of Num4: " <<  &Num4 << endl;

    // create a space for a cleaner look
    cout << endl;

    // Display the value of the Num1 and Num2
    cout << "Num1 = " << Num1 << endl;
    cout << "Num2 = " << Num2 << endl;

    // create a space for cleaner look
    cout << endl;

    // Assign the value of Num1 to Num3
    p = &Num3;
    *p = Num1;


    // Print the value of Num3
    cout << "Value of the Num3: " << Num3 << endl;

    // create a space for cleaner look
    cout << endl;

    // Assign the address of Num2 to Num4
    Num4 = &Num2;

    // Print the value of Num4
    cout << "Value of Num4: " << Num4 << endl;

   return 0;
}