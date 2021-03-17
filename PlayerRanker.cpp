//File Name: Player Ranker
//Author: Josh Nickens
//Email Address: jcnickens@my.milligan.edu
//Term Project
//Description: This program analyzes the stats of players in order to determine a league MVP
//PM06
//Last Changed: 3/17/21

#include <iostream>
#include <string>
#include <list>
using namespace std;

int choice;
int numPlayers;
int points[16];
const int maxPlayers = 60;
string player[maxPlayers];
int points[maxPlayers];
int rebounds[maxPlayers];
int fouls[maxPlayers];
double ppg[maxPlayers]; 
double rpg[maxPlayers];
double fpg[maxPlayers];
const double gamesTotal = 16.0;
void listPrint(string s[], int size);
void listPrint(string s[], int p[], int size);


//gamesTotal will be constant for all teams barring any cancelations or forfeits
//double mvpCalc()
//Precondition: given player info
//Postcondition: output index of MVP points
//int sum(points[]);
//Precondition: Number of games, int point scored each game
//Postcondition: Sum of points
//float average(points1);
//Precondition: Total points, number of games
//Postcondition: Average points per game


int main()
{
	cout << "Welcome to the Player Ranker \n";
	cout << "Are you starting a new program or continuing an old one?\n";
	cout << "1. New program   2. Old program";
	cout << " :";
	cin >> choice;
	switch (choice)
	{
	case 1:
		cout << "Starting new program.";
		break;

	case 2:
		cout << "Continuing old program.";
		break;

	case 3:
		cout << "Not a valid choice.";
		cout << "Choose again.";
		cin >> choice;
		break;
	}
	cout << "Do you have total points or by game points?";
	cout << "1. Total points   2. By game points";
	cout << " :";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		cout << "Starting total point system\n";
		cout << "How many players are there? ";
		cin >> numPlayers;
		if (numPlayers < 0 || numPlayers > 60)
		{
			cout << "Please re-enter the number of players.";
			cin >> numPlayers;
		}
		for (int i = 0; i <= numPlayers; i++)
		{
			cout << "\nWhat is the player's name? ";
			cin >> player[i];
			cout << "How many points did they score? ";
			cin >> points1;
			cout << "How many rebounds did they have? ";
			cin >> rebounds1;
			cout << "How many times did they foul? ";
			cin >> fouls1;
		}
		listPrint(player[], numPlayers);

		ppg[0] = points[i] / gamesTotal;
		rpg[0] = rebounds[i] / gamesTotal;
		fpg[0] = fouls[i] / gamesTotal;
		cout << "player1 stats are: \n";
		cout << "Points per Game: ";
		cin >> ppg[0];
		cout << "\nRebounds per Game: ";
		cin >> rpg[0];
		cout << "\nFouls per Game: ";
		cin >> fpg[0];
		break;
	}



	case 2:
	{
		cout << "Starting by game system";
		cout << "How many players are there? ";
		cin >> numPlayers;
		if (numPlayers < 0 || numPlayers > 60)
		{
			cout << "Please re-enter the number of players.";
			cin >> numPlayers;
		}
		for (int i = 0; i <= numPlayers; i++)
		{
			cout << "\nWhat is the player's name? ";
			cin >> player[i];
			cout << "Input their points for each game. ";
			break;
		}
	}


	case 3:
	{
		cout << "Not a valid choice.";
		cout << "Choose again.";
		cin >> choice;
		break;
	}



	//int sum(week1, week2, week3, week4, week5, week6, week7, week8, week9, week10, week11, week12, week13, week14, week15, week16);
	//{
		//cin week1, week2, week3, week4, week5, week6, week7, week8, week9, week10, week11, week12, week13, week14, week15, week16;
		//sum(week1, week2, week3, week4, week5, week6, week7, week8, week9, week10, week11, week12, week13, week14, week15, week16);
	//}
	//float average(week1, week2, week3, week4, week5, week6, week7, week8, week9, week10, week11, week12, week13, week14, week15, week16);
	//{
		//cin week1, week2, week3, week4, week5, week6, week7, week8, week9, week10, week11, week12, week13, week14, week15, week16;
		//average(week1, week2, week3, week4, week5, week6, week7, week8, week9, week10, week11, week12, week13, week14, week15, week16);
	//}
	return 0;

	}
}
void listPrint(string s[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << s[i] << "\n " ;
	}
	return;
}
void listPrint(string s[], int p[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << s[i] << "\n  " << p[i] << " ";
	}
}