// Financial aid program
//
// Program by: Harsh Gosar

//Includes and namespace
#include<iostream>

using namespace std;

int main()
{
	char studentResponse; // Character to capture user input for whether they are a student or not

	int income, // Variable to get student input for his/her income
		finAid; // Variable that will display the financial aid based on the student's income

	// Finding out if student is an Undergrad or not
	cout << "Are you an undergraduate student? ";
	cin >> studentResponse;

	if (studentResponse == 'y') // Checking for correct response = yes
	{
		cout << "What is your current yearly income? ";
		cin >> income; // Asking the student for his/her income

		if(income <= 15000 && income >= 0) // Checking for a valid input and income below or equal to 15k
		{
			finAid = 1000; // Assigning the fin aid based on income

			//Printing the final result
			cout << "You qualify for $" << finAid << " in financial aid.";
		}
		else if (income > 15000) // Checking if student has income more than 15k
		{
			finAid = 500; // Assigning the fin aid based on income

			//Printing the final result
			cout << "You qualify for $" << finAid << " in financial aid.";
		}
		else // Error is thrown if a number less than 0 is entered
		{
			cout << "Invalid Input";
		}

	}
	else if (studentResponse == 'n') // Checking for correct response = no
	{
		cout << "You do not qualify for financial aid"; // Student is ineligible as he/she is not an UG student
	}
	else // Throwing an error for invalid input
	{
		cout << "Invalid Input";
	}


	return 0;
} // The end
