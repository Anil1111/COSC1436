/*
 * COSC 1436
 * 
 * Demonstrates sorting string arrays.
 */
#include <iostream>

using namespace std;

//const int MaxItems = 1000;
//const int MaxItemSize = 100;

//Sorts an array of integers using bubble sort.
//void BubbleSort ( char items[][MaxItemSize], int count )
void BubbleSort ( int items[], int count )
{	
	//char temp[MaxItemSize];
	int temp;

	bool swapped = true;
	for (int i = 0; i < count && swapped; ++i)
	{
		swapped = false;
		for (int j = 0; j < (count - 1); ++j)
		{
			//if (strcmpitems[j], items[j + 1]) > 0)
			if (items[j] > items[j + 1])			
			{
				//strcpy(temp, items[j + 1]);
				temp = items[j + 1];
				//strcpy(items[j + 1], items[j]);
				items[j + 1] = items[j];
				//strcpy(items[j], temp);
				items[j] = temp;
				swapped = true;
			};
		};
	};
};

void main ( )
{	
	//char items[MaxItems][MaxItemSize] = { 0 };
	int* items = nullptr;

	int count;
	cout << "How many integers do you want to enter?";
	cin >> count;

	//Allocate memory
	items = new int[count];

	for (int index = 0; index < count; ++index)
	{
		cout << "Enter an integer:" << endl;
		cin >> items[index];
	};

	////Get items
	//int count = 0;
	//while (count < MaxItems)
	//{
	//	char item[MaxItemSize];
	//	cout << count + 1 << ") ";		
	//	cin >> item;

	//	if (strcmp(item, "0") == 0)
	//		break;

	//	strcpy(items[count++], item);
	//};

	//Sort the items
	BubbleSort(items, count);

	//Print the results
	for (int index = 0; index < count; ++index)
	{
		cout << items[index] << endl;
	};

	//Clean up
	delete[] items;
}
