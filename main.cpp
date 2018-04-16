/*******************************************************************************
 * AUTHORS		: Zac Campos & Farah Alfarah
 * STUDENT ID	: 1058476	& 1035501
 * LAB #23 		: Functions - Rock Paper Scissors
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/16/18
 ******************************************************************************/

#include "header.h"

/*******************************************************************************
 * Functions - Rock Paper Scissors
 * -----------------------------------------------------------------------------
 * This program will play rock paper scissors with the user for a number of
 * rounds. The number of rounds will be specified through user's input.
 * -----------------------------------------------------------------------------
 * INPUT:
 *			name   		: the player's name that user inputs
 *			roundPref  	: number rounds the player wants to play
 *			playerChoice: player choice of rock, paper, or scissors
 *
 * OUTPUT:
 * 			<This program will output a class heading>
 ******************************************************************************/


int main()
{
	/***************************************************************************
	 * CONSTANTS
	 * -------------------------------------------------------------------------
	 * OUTPUT - USED FOR CLASS HEADING
	 * -------------------------------------------------------------------------
	 * PROGRAMMER	: Programmer's Name
	 * CLASS		: Student's Course
	 * SECTION		: Class Days and Times
	 * LAB_NUM		: Lab Number (specific to this lab)
	 * LAB_NAME		: Title of the Lab
	 **************************************************************************/

	const char PROGRAMMER[] = "Zac Campos & Farah Alfarah";
	const char CLASS[]		= "CS1A";
	const char SECTION[]	= "MW: 8am";
	const int  LAB_NUM		= 23;
	const char LAB_NAME[]	= "Functions - Rock Paper Scissors";

	// variable declarations go here
	string name;
	int roundPreference;
	char playerChoice;
	char computerChoice;
	bool winner = false;
	int roundCount = 0;
	int roundsWon = 0;
	float averageWins = 0;
	// OUTPUT - Class Heading
	cout << left;
	cout << "***************************************************\n";
	cout << "*  PROGRAMMED BY : "	<< PROGRAMMER 	<< endl;
	cout << "*  "		<< setw(14) << "CLASS"		<< ": " << CLASS	<< endl;
	cout << "*  "		<< setw(14)	<< "SECTION"	<< ": " << SECTION  << endl;
	cout << "*  LAB #"	<< setw(9)	<< LAB_NUM		<< ": "	<< LAB_NAME	<< endl;
	cout << "***************************************************\n\n";
	cout << right;

	srand (time(NULL));

	/***************************************************************************
	 * INPUT - Reads in the player's name and the number of rounds they would
	 * 		   like to play.
	 **************************************************************************/
	GetInput(name, roundPreference);

	for(roundCount = 0; roundCount < roundPreference; roundCount ++)
	{
	/***********************************************************************
	* PROCESSING - Reads in the player's choice of Rock Paper or Scissors
	* 				then chooses random choice for the computer and compares
	* 				the two choices to see who wins.
	***********************************************************************/
		GetAndCheckPlay(playerChoice);

		GetComputerPlay(computerChoice);

		CheckWin(winner, playerChoice, computerChoice);

	/***********************************************************************
	* OUTPUT - outputs all functions of winner, name, playerChoice, 
	* 		   computerChoice, and roundsWon. In addition to the average wins 
	* 		   that the user has.
	**********************************************************************/
		OutputWin(winner, name, playerChoice, computerChoice, roundsWon);
	}

	averageWins = (roundsWon / float(roundPreference)) * 100;

	OutputMatchWinner(name, averageWins);


	return 0;
}




