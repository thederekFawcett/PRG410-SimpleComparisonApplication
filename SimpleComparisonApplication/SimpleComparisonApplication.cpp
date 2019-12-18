//************************************************************************************
// Author: Derek Fawcet
// Due Date: December 9th, 2019
//
// Program: SimpleComparisonApplication
//
// -Ask the user to enter 3 integers
// -Obtains the numbers from the user
// -Prints the largest number and then the smallest of the numbers
// -If the numbers are equal, prints the message: "These numbers are equal."
// -Prints the sum, average, and product of the 3 numbers
//************************************************************************************

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

int arr[3];
int sum;
string stringInput, ans;

 void setNums(string n) // converts string input to int array
{
	int j = 0;
	for (int i = 0; n[i] != '\0'; i++)
	{
		if (n[i] == ' ')
		{
			j++;
		}
		else
		{
			arr[j] = arr[j] * 10 + (n[i] - 48);
		}
	}
}

void getNums() // prints to screen user input
{
	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << " ";
	}
}

void biggestNum() // prints largest integer to screen
{
	if ((arr[0] >= arr[1]) && (arr[0] >= arr[2]))
		cout << "Largest integer entered is:\t\t" << arr[0] << endl;
	else if ((arr[1] >= arr[0]) && (arr[1] >= arr[2]))
		cout << "Largest integer entered is:\t\t" << arr[1] << endl;
	else if ((arr[2] >= arr[0]) && (arr[2] >= arr[1]))
		cout << "Largest integer entered is:\t\t" << arr[2] << endl;
}

void smallestNum() // prints smallest integer to screen
{
	if ((arr[0] <= arr[1]) && (arr[0] <= arr[2]))
		cout << "Smallest integer entered is:\t\t" << arr[0] << endl;
	else if ((arr[1] <= arr[0]) && (arr[1] <= arr[2]))
		cout << "Smallest integer entered is:\t\t" << arr[1] << endl;
	else if ((arr[2] <= arr[0]) && (arr[2] <= arr[1]))
		cout << "Smallest integer entered is:\t\t" << arr[2] << endl;
}

void sameNum() // prints message if any of 3 numbers are equal
{
	if ((arr[0] == arr[1]) && (arr[1] == arr[2]))
		cout << "These numbers are equal:\t\t" <<arr[0] << ", " << arr[1] << ", & " << arr[2] << endl;
	else if (arr[0] == arr[1])
		cout << "These numbers are equal:\t\t" << arr[0] << " & " << arr[1] << endl;
	else if (arr[0] == arr[2])
		cout << "These numbers are equal:\t\t" << arr[0] << " & " << arr[2] << endl;
	else if (arr[1] == arr[2])
		cout << "These numbers are equal:\t\t" << arr[1] << " & " << arr[2] << endl;
}

int sumNum() // returns sum of 3 numbers entered
{
	sum = 0;
	for (int i = 0; i < 3; ++i)
	{
		sum += arr[i];
	}
	return sum;
}

double averageNum() // returns average of 3 integers in double form
{
	return (sum/(double)3);
}

double productNum() // returns product of 3 integers
{
	return (arr[0] * arr[1] * arr[2]);
}

void start() // main chunk of application
{
	cout << "Enter three integers with a space between each (example: 5 112 83): ";
	getline(cin, stringInput);
	cout << endl;

	setNums(stringInput);
	cout << "The numbers entered are:\t\t";
	getNums();
	cout << "\n\n";
	biggestNum();
	smallestNum();
	sameNum();

	cout << "\nSum of all integers entered is:\t\t" << sumNum() << endl;
	cout << "Average of all integers entered is:\t" << averageNum() << endl;
	cout << "Product of all integers entered is:\t" << noshowpoint << productNum() << endl;
	memset(arr, 0, sizeof(arr)); // clears array
}

int main()
{
	ans = "y";
	while (ans == "y")
	{
		start();
		cout << "\nWould you like to run the program again? 'y' for yes, or any other key to exit: ";
		cin >> stringInput;
		ans = stringInput;
		cout << "\n\n";
		cin.ignore();
	}
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
