/*******************************************************************************
 * AUTHORS		: Zac Campos & Farah Alfarah
 * STUDENT ID	: 1058476	& 1035501
 * LAB #23 		: Functions - Rock Paper Scissors
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/16/18
 ******************************************************************************/

/**************************************************************************
 * Function CheckWin: This function is seperated on another source
 * file. It checks if the user has won, returns true if they won or false
 * if the computer won.
 *************************************************************************/

#include "header.h"

void CheckWin(bool &winner, const char playerChoice, const char computerChoice)
{
	winner = false;

	switch (computerChoice)
	{
		case 'R':
			if(playerChoice == 'P')
			{
				winner = true;
			}
		break;

		case 'P':
			if(playerChoice == 'S')
			{
				winner = true;
			}
		break;

		case 'S':
			if(playerChoice == 'R')
			{
				winner = true;
			}
		break;

	}
}
