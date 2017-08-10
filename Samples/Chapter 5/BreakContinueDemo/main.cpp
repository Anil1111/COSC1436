/*
 * COSI 1436
 *
 * Demonstrates the use of break and continue.
 */
#include <iostream>

using namespace std;

void main ( )
{
   //Loop until done
   while (true)
   {
      int count;
      cout << "Enter the number to count to: ";
      cin >> count;

      //Start counting
      int maxIterations = (count / 10) + 1;
      for (int iteration = 0; iteration < maxIterations; ++iteration)
      {
         //Give the user an option, except the first time
         if (iteration > 0)
         {
            char option;
            cout << endl << "Do you want to keep going (C), skip the next 10 (S) or quit (Q)?";
            cin >> option;

            option = toupper(option);
            if (option == 'S')
               continue;
            else if (option == 'Q')
               break;
         };
         
         //Display the next 10, at least until we run out
         for (int index = (iteration * 10); (index < count) && (index < (iteration * 10) + 10); ++index)
         {
            cout << index + 1 << " ";
         };
      };
      cout << endl;

      //Do it again
      cout << "Press Q to quit or any key to run again" << endl;
      cin.ignore();
      if (cin.get() == 'Q')
         break;
   };
}