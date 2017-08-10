/*
 * COSI 1436
 *
 * Demonstrates a typical while loop
 */
#include <iostream>
#include <ctime>

using namespace std;

void main ( )
{   
   const int MaximumGuesses = 10;

   srand((unsigned int)time(NULL));

   bool done = false;
   while (!done)
   {
      //Generate a random # between 1 and 100
      int actualValue = (rand() % 100) + 1;      

      cout << "I have choosen a number between 1 and 100.  Try to guess my number." << endl;

      //Until the user guesses or they've tried 10 times then keep asking
      int numberGuesses = 0;
      int guess = 0;
      while ((guess != actualValue) && (numberGuesses < MaximumGuesses))
      {
         cout << "Guess #" << numberGuesses + 1 << ": ";
         cin >> guess;

         //Let the user know if it was too high, low or just right
         if (guess > actualValue)
         {
            cout << "Too high..." << endl;
            ++numberGuesses;
         } else if (guess < actualValue)
         {
            cout << "Too low..." << endl;
            ++numberGuesses;
         } else
            cout << "You guessed it!!!" << endl;
      };

      if (MaximumGuesses == numberGuesses)
         cout << "You failed..." << endl;

      //See if the player wants to play again
      cout << "Press Q to quit or any other character to play again." << endl;
      cin.ignore();
      char option = cin.get();
      
      if (option == 'Q')
         done = true;
   };
}