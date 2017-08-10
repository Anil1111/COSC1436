/*
 * COSC 1436
 * 
 * Demonstrates sorting string arrays.
 */
#include <iostream>

using namespace std;

const int MaxItems = 1000;
const int MaxItemSize = 100;

//Sorts the strings of an array using bubble sort.
void BubbleSort ( char items[][MaxItemSize], int count )
{	
	char temp[MaxItemSize];

	bool swapped = true;
	for (int i = 0; i < count && swapped; ++i)
	{
		swapped = false;
		for (int j = 0; j < (count - 1); ++j)
		{
			if (strcmp(items[j], items[j + 1]) > 0)
			{
				strcpy(temp, items[j + 1]);
				strcpy(items[j + 1], items[j]);
				strcpy(items[j], temp);
				swapped = true;
			};
		};
	};
};

void main ( )
{	
	char items[MaxItems][MaxItemSize] = { 0 };

	cout << "Enter a string to sort or 0 to begin." << endl;

	//Get items
	int count = 0;
	while (count < MaxItems)
	{
		char item[MaxItemSize];
		cout << count + 1 << ") ";		
		cin >> item;

		if (strcmp(item, "0") == 0)
			break;

		strcpy(items[count++], item);
	};

	//Sort the items
	BubbleSort(items, count);

	//Print the results
	for (int index = 0; index < count; ++index)
	{
		cout << items[index] << endl;
	};
}
