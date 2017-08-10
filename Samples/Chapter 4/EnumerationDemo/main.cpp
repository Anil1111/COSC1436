/*
 * Demonstrates enumerations in switch statements.
 */
#include <iostream>
#include <string>

using namespace std;

//Defines the months
enum Month 
{ 
    January = 1, 
    February, 
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};

void main ( )
{
    int monthNumber, day, year;
    cout << "Enter your birthday in the form: mm dd yyyy: ";
    cin >> monthNumber >> day >> year;

    string monthName;
    switch(monthNumber)
    {        
        case January: monthName = "January"; break;
        case February: monthName = "February"; break;
        case March: monthName = "March"; break;
        case April: monthName = "April"; break;
        case May: monthName = "May"; break;
        case June: monthName = "June"; break;
        case July: monthName = "July"; break;
        case August: monthName = "August"; break;
        case September: monthName = "September"; break;
        case October: monthName = "October"; break;
        case November: monthName = "November"; break;
        case December: monthName = "December"; break;        

        default: monthName = "Unknown"; break;
    };
    cout << "You were born on: " << monthName << " " << day << ", " << year << endl;

#pragma region Wait
    cout << endl << "Press ENTER to quit";
    cin.ignore();
    cin.get();
#pragma endregion
}