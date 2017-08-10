/*
 * COSI 1436
 *
 * Demonstrates the use of a do-while loop for a menu system.
 */
#include <iostream>

using namespace std;

void main ( )
{
   bool quit = false;

   while (!quit)
   {
      //Display the menu
      char option;

      cout << endl << "Select an option" << endl;
      cout << "1) Check Balance" << endl;
      cout << "2) Transfer Money" << endl;
      cout << "3) Pay Bills" << endl;
      cout << "Q) Quit" << endl;
      cin >> option;

      switch(option)
      {
         case '1' : cout << "$ 0" << endl; break;
         case '2' : cout << "You have no money to transfer." << endl; break;
         case '3' : cout << "There are no bills to pay." << endl; break;
         case 'Q' :
         case 'q' : quit = true; break;
      };
   };
}