/*
 * Demonstrates simple usage of the IF statement.
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
    cout << "\t5) Other..." << endl;
  
    //Get the input
    int game;
    cin >> game;
    cout << endl;

    //Play a game
    if (game == 1)
        cout << "Playing backgammon" << endl;
    if (game == 2)
        cout << "Playing checkers" << endl;
    if (game == 3)
        cout << "Playing chess" << endl;
    if (game == 4)
        cout << "Playing dominoes" << endl;
    if (game == 5)
        cout << "You select other games" << endl;
        cout << "At this time no other games are available." << endl;

#pragma region Wait
    cout << endl << "Press ENTER to quit";
    cin.ignore();
    cin.get();
#pragma endregion
}