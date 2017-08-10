/*
 * Demonstrates simple usage of the switch statement.
 * This is a revamped version of IfDemo.
 */
#include <iostream>

using namespace std;

void main ( )
{
    //Display a menu
    cout << "Select the game you would like to play: " << endl;
    cout << "\t1) Backgammon" << endl;
    cout << "\t2) Checkers" << endl;
    cout << "\t3) Chess" << endl;
    cout << "\t4) Dominoes" << endl;
    cout << "\t5) Monopoly" << endl;
    cout << "\t6) Life" << endl;
  
    //Get the input
    int game;
    cin >> game;
    cout << endl;

    //Play a game
    switch(game)
    {
        case 1: cout << "Playing backgammon" << endl; break;
        case 2: cout << "Playing checkers" << endl; 
        case 3: cout << "Playing chess" << endl; break;
        case 4: cout << "Playing dominoes" << endl; break;
        case 5: 
        case 6: 
        {
            cout << "Not implemented." << endl;
            cout << "Please come back later." << endl;
            break;
        };
		default: cout << "You entered an invalid selection." << endl; break;
    };

#pragma region Wait
    cout << endl << "Press ENTER to quit";
    cin.ignore();
    cin.get();
#pragma endregion
}