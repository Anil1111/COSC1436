/*
 * Displays a truth table for each logical operator.
 */
#include <iostream>
#include <iomanip>

using namespace std;

void main ( )
{
    bool value1, value2;

    //AND, OR
    cout << "Value1\tValue2\tAND\tOR\n";
    cout << "---------------------------------\n";
    
    value1 = value2 = false;
    cout << (value1 ? "true" : "false")
         << "\t" << (value2 ? "true" : "false")
         << "\t" << ((value1 && value2) ? "true" : "false")
         << "\t" << ((value1 || value2) ? "true" : "false") << endl;

    value1 = true; value2 = false;
    cout << (value1 ? "true" : "false")
         << "\t" << (value2 ? "true" : "false")
         << "\t" << ((value1 && value2) ? "true" : "false")
         << "\t" << ((value1 || value2) ? "true" : "false") << endl;

    value1 = false; value2 = true;
    cout << (value1 ? "true" : "false")
         << "\t" << (value2 ? "true" : "false")
         << "\t" << ((value1 && value2) ? "true" : "false")
         << "\t" << ((value1 || value2) ? "true" : "false") << endl;

    value1 = value2 = true;
    cout << (value1 ? "true" : "false")
         << "\t" << (value2 ? "true" : "false")
         << "\t" << ((value1 && value2) ? "true" : "false")
         << "\t" << ((value1 || value2) ? "true" : "false") << endl;
    
    //NOT
    cout << endl;
    cout << "Value1\tNOT" << endl;
    cout << "-------------" << endl;

    value1 = false;
    cout << (value1 ? "true" : "false")
         << "\t" << (!value1 ? "true" : "false") << endl;
        
    value1 = true;
    cout << (value1 ? "true" : "false")
         << "\t" << (!value1 ? "true" : "false") << endl;

#pragma region Wait
       
    cout << endl << "Press ENTER to quit";
    cin.get();
#pragma endregion
}