/*
 * Displays a truth table for each logical operator.
 */
#include <iostream>
#include <iomanip>

using namespace std;

void main ( )
{
    bool value1, value2;
    bool andResult, orResult;

    //AND, OR
    cout << "Value1\tValue2\tAND\tOR\n";
    cout << "-----------------------------" << endl;
    
    value1 = value2 = false;
    andResult = value1 && value2;    
    orResult = value1 || value2;
    cout << value1 << "\t" << value2 << "\t" << andResult << "\t" << orResult << endl;

    value1 = true; value2 = false;
    andResult = (value1 && value2);
    orResult = value1 || value2;
    cout << value1 << "\t" << value2 << "\t" << andResult << "\t" << orResult << endl;

    value1 = false; value2 = true;
    andResult = (value1 && value2);
    orResult = value1 || value2;
    cout << value1 << "\t" << value2 << "\t" << andResult << "\t" << orResult << endl;

    value1 = value2 = true;
    andResult = (value1 && value2);
    orResult = value1 || value2;
    cout << value1 << "\t" << value2 << "\t" << andResult << "\t" << orResult << endl;
    
    //NOT
    cout << endl;
    cout << "Value1\tNOT\n";
    cout << "-------------\n";

    value1 = false;
    cout << value1 << "\t" << !value1 << endl;
        
    value1 = true;
    cout << value1 << "\t" << !value1 << endl;

#pragma region Wait
       
    cout << endl << "Press ENTER to quit";
    cin.get();
#pragma endregion
}