/*
 * COSC 1436
 *
 * Demonstrates passing parameters by reference.
 */
#include <iostream>
#include <cmath>

using namespace std;

double CalculatePaintValues ( int totalArea, double& totalGallons, double& totalCost );

void main ( )
{
	//Get the number of rooms to paint
	int roomCount;
	cout << "How many rooms are to be painted: ";
	cin >> roomCount;

	//For each room get the square footage
	int totalArea = 0;
	for (int index = 0; index < roomCount; ++index)
	{
		int area;
		cout << "What is the square footage for room #" << index + 1 << "? ";
		cin >> area;

		totalArea += area;
	};

	//Calculate the gallons of paint needed and the cost
	double gallons = 0;
	double cost = 0;
	double hours = CalculatePaintValues(totalArea, gallons, cost);

	//Output it
	cout << "Estimate:" << endl;
	cout << "---------" << endl;
	cout << "Total Area: " << totalArea << " sq ft" << endl;
	cout << "Time: " << hours << " hours" << endl;
	cout << "Paint: " << gallons << " gals" << endl;
	cout << "Cost: $" << cost << endl;
}

// Summary: Calculates the costs of painting an area.
// Parameters:
//     totalArea - [In] The total area to paint.
//     totalGallons - [Out] The total gallons needed.
//     totalCost - [Out] The total cost.
// Returns: The total hours needed.
double CalculatePaintValues ( int totalArea, double& totalGallons, double& totalCost )
{
	const double areaPerHour = 18;
	const double areaPerGallon = 115;
	const double costPerHour = 18.0;

	//Calculate totals
	totalGallons = ceil(totalArea / areaPerGallon);
	double totalHours = ceil(totalArea / areaPerHour);

	totalCost = totalHours * 18;

	return totalHours;
};
