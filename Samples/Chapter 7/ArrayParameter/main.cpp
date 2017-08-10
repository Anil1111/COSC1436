/*
 * COSC 1436
 *
 * Uses an array as a parameter
 */
#include <iostream>

using namespace std;

const int MAX_SIZE = 100;

// Prints an integer array.
// PARAMETERS: 
//    values - The array to print
//    size - The size
void PrintArray ( int values[], int size )
{
    for (int index = 0; index < size; ++index)
    {
        //Break every 10 numbers
        if ((index != 0) && (index % 10 == 0))
            cout << endl;

        cout << values[index] << "\t";
    };
}

// Prompts the user for the list of numbers.
// PARAMETERS: 
//    values - The array to populate
//    size - The maximum size
// RETURNS: The number of values entered
int PromptForNumbers ( int values[], int size )
{
    cout << "Enter number or 0 to quit" << endl;

    for (int count = 0; count < size; ++count)
    {
        //Prompt for next value
        int value;
        cout << "#" << count + 1 << ": ";
        cin >> value;

        //If no more values then done
        if (value == 0)
            return count;

        values[count] = value;
    };

    return size;
}

void main ()
{
    int numbers[MAX_SIZE] = { 0 };

    int used = PromptForNumbers(numbers, MAX_SIZE);

    PrintArray(numbers, used);
}