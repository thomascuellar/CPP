#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double PI = 3.14159265;

int main()
{
	double lengthOfYard;
	double radiusOfTree;
	double spaceBetweenTrees;
	double spaceForSingleTree;
	int numberOfTrees;
	double totalAreaOfAllTrees;

	cout << "Enter the length of the yard: ";
	cin >> lengthOfYard;

	cout << "Enter the radius of a fully-grown tree: ";
	cin >> radiusOfTree;

	cout << "Enter the space between the fully-grown trees: ";
	cin >> spaceBetweenTrees;

	spaceForSingleTree = 2 * radiusOfTree + spaceBetweenTrees;

	numberOfTrees = (int)(lengthOfYard / spaceForSingleTree);

	totalAreaOfAllTrees = (PI * pow(radiusOfTree, 2.0))
		* numberOfTrees;

	cout << endl << "The number of trees that can be planted in the yard are: "
		<< numberOfTrees << endl;

	cout << "The total space occupied by the fully-grown trees is: "
		<< fixed << showpoint << setprecision(2)
		<< totalAreaOfAllTrees << endl;

	return 0;
}