/*
 * COSC 1436
 * 
 * Demonstrates reading and writing binary files.  Encrypts or decrypts a file.
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <Windows.h>
#include "StringHelper.h"

using namespace std;

//We use globals here because we haven't learned a better way yet
char g_inFilename[MAX_PATH + 1] = { 0 };
char g_outFilename[MAX_PATH + 1] = { 0 };
bool g_encrypt = true;

const char SuperSecretCipherKey = 0x45;

//SUMMARY: Decrypts a file.
//INPUT:
//   inFile - The file to decrypt.
//   outFile - The file to generate.
bool DecryptFile ( char const* inFile, char const* outFile )
{
	//Open the input file
	ifstream input(inFile, ios::binary);
	if (input.fail())
	{
		cout << "Failed to open input file." << endl;
		return false;
	};

	//Open the output file for writing
	ofstream output(outFile);
	if (output.fail())
	{
		cout << "Failed to open output file." << endl;
		return false;
	};

	//Read a block of data at a time 
	char buffer[1024];	
	while (!input.eof())
	{
		input.read(buffer, sizeof(buffer));
		int read = (int)input.gcount();
		if (read > 0)
		{
			//Decrypt the data by simply XORing a value into it
			for (int index = 0; index < read; ++index)
				buffer[index] = buffer[index] ^ SuperSecretCipherKey;
		};

		//Write out the data
		output.write(buffer, read);
	};
	
	return true;
};

//SUMMARY: Encrypts a file.
//INPUT:
//   inFile - The file to encrypt.
//   outFile - The file to generate.
bool EncryptFile ( char const* inFile, char const* outFile )
{
	//Open the input file
	ifstream input(inFile);
	if (input.fail())
	{
		cout << "Failed to open input file." << endl;
		return false;
	};

	//Open the output file for writing
	ofstream output(outFile, ios::binary);
	if (output.fail())
	{
		cout << "Failed to open output file." << endl;
		return false;
	};

	//Read a block of data at a time 
	char buffer[1024];	
	while (!input.eof())
	{
		input.read(buffer, sizeof(buffer));
		int read = (int)input.gcount();
		if (read > 0)
		{
			//Encrypt the data by simply XORing a value into it
			for (int index = 0; index < read; ++index)
				buffer[index] = buffer[index] ^ SuperSecretCipherKey;
		};

		//Write out the data
		output.write(buffer, read);
	};
	
	return true;
};

//Processes the command line
bool ParseCommandLine ( char* args[], int count )
{
	for (int index = 1; index < count; ++index)
	{
		char* arg = args[index];
		if ((_strcmpi(arg, "-d") == 0) || (_strcmpi(arg, "/d") == 0)) 
			g_encrypt = false;
		else if (StartsWith(arg, "/in:", true))
			strcpy(g_inFilename, arg + 4);
		else if (StartsWith(arg, "/out:", true))
			strcpy(g_outFilename, arg + 5);
		else if ((strcmp(arg, "-?") == 0) || (strcmp(arg, "/?") == 0) || 
			      (_strcmpi(arg, "-help") == 0) || (_strcmpi(arg, "/help") == 0))
		{
			cout << "Encryptor [/d] /in:<infile> /out:<outfile>" << endl;
			cout << "where " << endl;
			cout << "   /d - Decrypt the file (default is encrypt)" << endl;
			
			return false;
		} else
		{
			cout << "Unknown parameter '" << arg << "' ignored." << endl;
			return false;
		};
	};

	//Validate
	if (strlen(g_inFilename) == 0)
	{
		cout << "Enter the input file: ";
		cin >> g_inFilename;
	};
	if (strlen(g_outFilename) == 0)
	{
		cout << "Enter the output file: ";
		cin >> g_outFilename; 
	};

	return true;
};

void main ( int argc, char* argv[] )
{		
	//Process the parameters
	if (!ParseCommandLine(argv, argc))
		return;

	if (g_encrypt)
		EncryptFile(g_inFilename, g_outFilename);
	else
		DecryptFile(g_inFilename, g_outFilename);
}