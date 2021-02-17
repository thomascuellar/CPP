#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile; 

	inFile.open("inData.txt");
	outFile.open("outData.txt");

	string firstName = "Giselle", lastName = " Robinson", department = " Accounting";

	double monthlySalary, gross = 5600, bonus = 0.05, tax = 0.30, distance = 450.00, time = 9.00, cost = 1.50, salesAmount = 112.50, speed = 50.00;

	int count = 75;
	
	inFile.open("inData.txt");
	outFile.open("outData.txt");

	inFile >> firstName >> lastName >> department;
	cout << "Name: " << firstName << "" << lastName
		<< ", Department:" << department << endl;
	inFile >> gross >> bonus >> tax;
	cout << "Monthly Gross Salary: $" << gross
		<< ", Monthly Bonus: " << bonus << "%Taxes: " << tax << "%" << endl;

	inFile >> distance >> time;
	cout << "Distance Travelled: " << distance
		<< ", Traveling Time: " << time << "hours" << endl;

	speed = distance / time;
	cout << "Average Speed: " << speed
		<< ", miles per hour" << endl;

	inFile >> count >> cost;
	cout << "Number of Coffee Cups Sold: " << count
		<< " Cost: $" << cost << "per cup" << endl;

	monthlySalary = gross + ((gross * bonus) / 100);
	monthlySalary = monthlySalary - (monthlySalary * 30) / 100;
	cout << "The monthly salary is: " << monthlySalary << endl;

	salesAmount = count * cost;
	cout << "The sales amount is: " << salesAmount << endl;

	inFile.close();
	outFile.close();

	return 0;
}