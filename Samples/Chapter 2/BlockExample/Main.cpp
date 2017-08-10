#include <iostream>

using namespace std;

double globalValue = 1234.5678;

void main ( )
{    
    int intValue = 10;
    cout << "intValue: " << intValue << endl;
    cout << "globalValue: " << globalValue << endl;

    //Block 1
    {
        int intValue = 20;
        double globalValue = 45.32;
        cout << "\tintValue: " << intValue << endl;
        cout << "\tglobalValue: " << globalValue << endl;

        //Block 2
        {
            int intValue = 30;
            cout << "\t\tintValue: " << intValue << endl;
            
            char globalValue = 'D';
            cout << "\t\tglobalValue: " << globalValue << endl;
        };

        cout << "\tintValue: " << intValue << endl;
        cout << "\tglobalValue: " << globalValue << endl;
    };

    cout << "intValue: " << intValue << endl;
    cout << "globalValue: " << globalValue << endl;

#pragma region Wait
    cout << endl << "Press ENTER to quit.";
    cin.get();
#pragma endregion
}