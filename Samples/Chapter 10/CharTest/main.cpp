/* 
 * COSC 1436
 *
 * Demonstrates the various character testing functions.
 */
#include <iostream>
#include <conio.h>
#include <cctype>
#include <iomanip>

using namespace std;

void main ( )
{
    cout << "Character\tisalpha\tisalnum\tisdigit\tislower\tisupper\tisspace\n";
    cout << "-----------------------------------------------------------------------\n";

    char ch;
    do
    {
        cin >> ch;
        if (ch == EOF)
            continue;

        cout << setw(9) << ch << "\t"
             << (isalpha(ch) ? "true" : "false") << "\t"
             << (isalnum(ch) ? "true" : "false") << "\t"
             << (isdigit(ch) ? "true" : "false") << "\t"
             << (islower(ch) ? "true" : "false") << "\t"
             << (isupper(ch) ? "true" : "false") << "\t"
             << (isspace(ch) ? "true" : "false") << endl;
    } while (tolower(ch) != 'q');
};