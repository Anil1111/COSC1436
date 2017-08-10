/*
 * Demonstrates declaring and calling a function with no inputs.
 */
#include <iostream>

using namespace std;

// Summary: Prompts for the user to press ENTER and then waits
void WaitForExit ( )
{
    cout << endl << "Press ENTER to quit";
    cin.get();
};

void main ( )
{
    bool value1, value2;
    bool result;

    //AND, OR
    cout << "Value1\tValue2\tAND\tOR" << endl;
    cout << "---------------------------------" << endl;
    
    value1 = value2 = false;
    result = value1 && value2;
    cout << (value1 ? "true " : "false") << "\t"
         << (value2 ? "true " : "false") << "\t"
         << (result ? "true " : "false") << "\t"
         << ((value1 || value2) ? "true" : "false") << endl;
    
    value1 = true; value2 = false;
    result = (value1 && value2);
    cout << (value1 ? "true " : "false") << "\t"
         << (value2 ? "true " : "false") << "\t"
         << (result ? "true " : "false") << "\t"
         << ((value1 || value2) ? "true" : "false") << endl;

    value1 = false; value2 = true;
    result = (value1 && value2);
    cout << (value1 ? "true " : "false") << "\t"
         << (value2 ? "true " : "false") << "\t"
         << (result ? "true " : "false") << "\t"
         << ((value1 || value2) ? "true" : "false") << endl;

    value1 = value2 = true;
    result = (value1 && value2);
    cout << (value1 ? "true " : "false") << "\t"
         << (value2 ? "true " : "false") << "\t"
         << (result ? "true " : "false") << "\t"
         << ((value1 || value2) ? "true" : "false") << endl;
    
    //NOT
    cout << endl;
    cout << "Value1\tNOT" << endl;
    cout << "-------------" << endl;

    value1 = false;
    cout << (value1 ? "true" : "false") << "\t"
         << (!value1 ? "true" : "false") << endl;
        
    value1 = true;
    cout << (value1 ? "true" : "false") << "\t"
         << (!value1 ? "true" : "false") << endl;
    
#pragma region Wait
//       
//    cout << endl << "Press ENTER to quit";
//    cin.get();
    WaitForExit();
#pragma endregion
}