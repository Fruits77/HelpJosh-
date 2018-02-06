/*Name: Daniel Denton
Last Date Modified: Feb 6th, 2018
Assignment: Programming Assignment 1
Description: Menu building
Status: Compiled and ran successfully on csegrid.ucdenver.edu
Met all requirements
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main ()
{
	//Creating the variables to be used in this program.
	string name;
	long studentID;
	int poison, poisoncheck;
	int Choice1_Step1, MenuTwo, MenuThree, MenuFour, MenuFive, MenuSix, MenuSeven, MenuEight, MenuNine;
	int Choice2_Step1;
	
	//Constants for the menu choices
	const int Choice1 = 1,
         	  Choice2 = 2,
		  Choice3 = 3;
	
	name = "Daniel Denton";
	studentID = 107525892;
	
	//Display my name and student ID
	cout << name << endl << setw(9) << studentID << endl;


	//Display the menu and get the choice.
	cout << "Math Equations Menu\n\n"
	     << "1. Almost Always 99\n"
	     << "2. Always 3\n"
	     << "3. Exit\n"
	     << "Choose your poison: ";
	cin >> poison;

	bool poisonCheck = (poison <= 3 && poison >= 1);

	while (!poisonCheck)
	{
		cout << "You didn't chose a valid menu option.\n" << "Please enter a valid option" << endl;
		cin >> poison;
		bool poisonCheck = (poison <= 3 && poison >= 1);
	}

	if (poisonCheck)
	{
		//This is where we actually do something with the user's input.
		switch (poison)
		{
			case Choice1:
				cout << "You chose menu option 1.\n";
				cout << "Please enter a number between 0 and 99.\n" << "You can choose 99 but not 0.\n";
				cin >> Choice1_Step1;

				//This loop will provide validation.
				while (Choice1_Step1 < 0 && Choice1_Step1 > 99)
				{
					cout << "Error: Please choose a number between 0 and 99.\n";
					cin >> Choice1_Step1;
				}

				//This will make the follow up actions happen based on initial conditions
				if (Choice1_Step1 < 10)
				{
					cout << "Your choice is less than 10, so we will multiply it by 10.\n";
					MenuTwo = Choice1_Step1 * 10;
					cout << "This is your new number " << MenuTwo << endl;
				}
				else
				{
					cout << "Your choice is 10 or more, so we will break the integer into two digits.\n";
					MenuThree = Choice1_Step1 / 10;
					MenuFour = Choice1_Step1 % 10;
					cout << "This is your first digit.\n" << MenuThree << endl;
					cout << "This is your second digit.\n" << MenuFour << endl;
				}
				break;

			case Choice2:
				cout << "You chose menu option 2.\n";
				cout << "Please pick a number.\n";
				cin >> Choice2_Step1;
				break;

			case Choice3:
				cout << "You chose menu option 3.\n";
				cout <<	"Thank you for playing Pick Your POISON. Better luck next time. GAME OVER!\n";
				return;

			default:
				do
				{
				cout << "You didn't chose a valid menu option.\n" << "Please enter a valid option" << endl;
				cin >> poison;
				poisoncheck = (poison <= 3 && poison >= 1);
				}
				while (!poisonCheck);
				break;
		}
	}

return 0;
}

