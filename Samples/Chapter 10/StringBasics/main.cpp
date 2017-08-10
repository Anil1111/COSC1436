/* 
 * COSC 1436
 * 
 * Demonstrates the basics of std::string
 */
#include <iostream>
#include <string>

using namespace std;

void main ()
{
    string one = "one";
    string two = "two";
    string three = "three";

    string join = one + ", " + two + ", " + three;

    string four = "four";

    join += ", " + four;
}