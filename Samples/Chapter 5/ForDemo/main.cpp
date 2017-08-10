/*
 * COSI 1436
 *
 * Demonstrates the use of the for loop
 */
#include <iostream>

using namespace std;

void main ( )
{
   //Loop until done
   bool done = false;
   while (!done)
   {
      int count;
      cout << "Enter the number to count to: ";
      cin >> count;

      //Start counting
      for (int index = 0; index < count; ++index)
      {
         if (((index % 10) == 0) && (index != 0))
            cout << endl;

         cout << index + 1 << " ";
      };
      cout << endl;

      //Do it again
      cout << "Press Q to quit or any key to run again" << endl;
      cin.ignore();
      if (cin.get() == 'Q')
         done = true;
   };
}