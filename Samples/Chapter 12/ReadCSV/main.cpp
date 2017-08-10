/* 
 * COSC 1436
 *
 * Demonstrates various stream functions to read a CSV file.
 */
#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>

using namespace std;

// SUMMARY: Removes any leading or trailing spaces.
// INPUT:
//    value - The string to trim.
void TrimString ( char* value )
{
	//Trim the end of the string first
	int len = strlen(value);
	if (len == 0)
		return;

	char* pos = &value[len - 1];
	while (((*pos == ' ') || (*pos == '\t')) && (pos != value))
		--pos;
	*(pos + 1) = '\0';	
	if (strlen(value) == 0)
		return;

	//Trim the beginning by finding the first non-whitespace character and then
	//moving the string backwards
	int start = strspn(value, " \t");
	if (start > 0)
		strcpy(value, value + start);
};

// SUMMARY: Cleans up a line.
// If the line contains a comment then it is truncated at the comment.
// Strings are trimmed to remove extra spaces.
void CleanLine ( char* line )
{
	//Find the comment, if any
	char* comment = strchr(line, ';');
	if (comment != nullptr)
		*comment = '\0';

	//Trim the string
	TrimString(line);
};

// SUMMARY: Reads an employee from the stream.
// INPUT: 
//    file - The stream to read from.
//    id - The employee ID.
//    firstName - The first name.
//    lastName - The last name.
//
// RETURNS: True if succcessful.
//
// The employee is a single line of the format: Id,FirstName[,LastName]
// A semicolon denotes the start of a comment.
bool ReadEmployee ( fstream& file, int& id, char firstName[], char lastName[] )
{
	while (true)
	{
		char line[1024];
		file.getline(line, sizeof(line));	

		//Clean up the line for processing
		CleanLine(line);
		if (strlen(line) == 0)
			continue;

		//Break up the string by commas		
		int index = 0;
		char* tokens[4] = { 0 };		

		char* token = strtok(line, ",");
		while ((token != nullptr) && (index < 4))
		{	
			tokens[index++] = token;
			
			//Next
			token = strtok(nullptr, ",");
		};

		//Convert to the appropriate type
		id = atoi(tokens[0]);
		
		strcpy(firstName, tokens[1]);
		TrimString(firstName);

		strcpy(lastName, tokens[2]);		
		TrimString(lastName);

		return true;
	};
};

// SUMMARY: Reads the employees from the stream.
// INPUT: 
//    file - The stream to read from.
//
// The file is a CSV where each employee is on a separate line.  
void ReadEmployees ( fstream& file )
{	
	int count = 0;

	while (!file.eof())
	{
		int id;
		char firstName[1024], lastName[1024];

		if (ReadEmployee(file, id, firstName, lastName))
		{
			cout << "[" << id << "] " << lastName << ", " << firstName << endl;
			++count;
		};
	};

	cout << "Read " << count << " employees" << endl;
};

int main ( )
{
	char filename[MAX_PATH + 1];
	cout << "Enter the employee file name: ";
	cin >> filename;

	char buffer[1024];

	fstream file(filename, ios::in);
	//ifstream file(filename);
	if (file.fail())
	{		
		cout << "Error opening file." << endl;
		cin.getline(buffer, 1024);
		return -1;
	};

	ReadEmployees(file);
	cin.getline(buffer, 1024);
	return 0;
}