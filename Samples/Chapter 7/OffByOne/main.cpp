/*
 * COSC 1436
 * 
 * Demonstrates an off by one error.
 */
#include <iostream>

using namespace std;

const int MaximumGradeCount = 100;

int main ( )
{
	//Get how many
	int size;
	cout << "How many grades are you entering? ";
	cin >> size;

	if (size > MaximumGradeCount)
	{
		cout << "Cannot enter more than " << MaximumGradeCount << " grades" << endl;
		return -1;
	};

	//Get the values
	double grades[MaximumGradeCount];	
	for (int index = 1; index <= size; ++index)
	{
		cout << "Enter grade " << index << ": ";
		cin >> grades[index];
	};

	//Generate a table containing the grades and their letter value
	cout << "Number\t\tGrade\t\tLetter" << endl << endl;
	for (int index = 0; index < size; ++index)
	{
		cout << index + 1 << "\t\t";
		cout << grades[index] << "\t\t";
		
		char letter;
		if (grades[index] >= 90)
			letter = 'A'; 
		else if (grades[index] >= 80)
			letter = 'B';
		else if (grades[index] >= 70)
			letter = 'C';
		else if (grades[index] >= 60)
			letter = 'D';
		else
			letter = 'F';
		cout << letter << endl;
	};

	return 0;
}