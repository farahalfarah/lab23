/*******************************************************************************
 * AUTHORS		: Zac Campos & Farah Alfarah
 * STUDENT ID	: 1058476 & 1035501
 * LAB #23 		: Functions - Rock Paper Scissors
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/16/18
 ******************************************************************************/

/**************************************************************************
 * Function GetInput: This function is seperated on another source file.
 * It accepts the name and how many rounds the user wants to play as input.
 *************************************************************************/

#include "header.h"

void GetInput(string &name, int &rounds)
{
	cout << "Enter Player's Name: ";
	getline(cin, name);

	cout << "Enter Number of Rounds in Match: ";
	cin  >> rounds;
	cin.ignore (1000, '\n');
	cout << endl;

}
