/*******************************************************************************
 * AUTHORS		: Zac Campos & Farah Alfarah
 * STUDENT ID	: 1058476   & 1035501 
 * LAB #23 		: Functions - Rock Paper Scissors
 * CLASS		: CS1A
 * SECTION		: MW 8am
 * DUE DATE		: 4/16/18
 ******************************************************************************/

#ifndef HEADER_H_
#define HEADER_H_

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

void GetInput(string &name, int &rounds);

char GetAndCheckPlay(char &playerChoice);

void GetComputerPlay(char &computerChoice);

void CheckWin(bool &winner, const char playerChoice, const char computerChoice);
string ChoiceConverter(const char characterChoice);

void OutputWin(const bool winner, const string name,
			   const char playerChoice, const char computerChoice,
			   int &roundsWon);

void OutputMatchWinner(const string name, const float averageWins);

#endif /* HEADER_H_ */
