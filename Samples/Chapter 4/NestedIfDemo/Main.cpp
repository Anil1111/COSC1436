/*
 * Demonstrates the usage of nested IF statements.
 */
#include <iostream>

using namespace std;

void main ( )
{
    //Display a menu
    cout << "How many players: " << endl;
    cout << "\t1) One" << endl;
    cout << "\t2) Two" << endl;
    cout << "\t3) More than two" << endl;
  
    //Get the input
    int players;
    cin >> players;
    
    //Select the game
    if (1 == players)
    {
        cout << endl << "Playing a game with one player" << endl;
    } else // 2+
    {
        if (2 == players)
        {
            cout << endl << "Playing a game with two players" << endl;
        } else // 3+
        {
            cout << endl << "Playing a game with three or more players" << endl;
        };
    } 

#pragma region Wait
    cout << endl << "Press ENTER to quit";
    cin.ignore();
    cin.get();
#pragma endregion
}