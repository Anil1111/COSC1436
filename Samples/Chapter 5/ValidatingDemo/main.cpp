/*
 * COSI 1436
 * 
 * Demonstrates using a while loop for validation.
 */
#include <iostream>

using namespace std;

void main ( )
{
   const int MaximumFactorial = 12;

   cout << "This program calculates the factorial of a number." << endl;

   //Get the number to factorialize - factorial gets too large after a small number.
   int value = 0;
   while ((value < 1) || (value > MaximumFactorial))
   {
      cout << "Enter a number between 1 and " << MaximumFactorial << ": " << endl;
      cin >> value;            
   };

   //Factorialize
   int result = 1;
   int currentValue = value;
   while (currentValue > 1)
   {
      result *= currentValue--;     
   };

   cout << value << "! = " << result << endl;

   cout << "Press ENTER to quit" << endl;
   cin.ignore();
   cin.get();
}