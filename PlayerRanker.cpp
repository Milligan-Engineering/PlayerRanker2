//File Name: Player Ranker
//Author: Josh Nickens
//Email Address: jcnickens@my.milligan.edu
//Term Project
//Description: This program analyzes the stats of players in order to determine a league MVP
//PM05
//Last Changed: 2/19/21

#include <iostream>
#include <string>
using namespace std;

int choice;
int numPlayers;
string player1, player2, player3, player4;
int points1, points2, points3, points4;
int rebounds1, rebounds2, rebounds3, rebounds4;
int fouls1, fouls2, fouls3, fouls4;
double ppg1, ppg2, ppg3, ppg4; 
double rpg1, rpg2, rpg3, rpg4;
double fpg1, fpg2, fpg3, fpg4;
const double gamesTotal = 16.0;
//gamesTotal will be constant for all teams barring any cancelations or forfeits

int main()
{
	cout << "Welcome to the Player Ranker \n";
	cout << "Are you starting a new program or continuing an old one?";
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
		cin >> player1;
		cout << "How many points did they score? ";
		cin >> points1;
		cout << "How many rebounds did they have? ";
		cin >> rebounds1;
		cout << "How many times did they foul? ";
		cin >> fouls1;
	}
	ppg1 = points1 / gamesTotal;
	rpg1 = rebounds1 / gamesTotal;
	fpg1 = fouls1 / gamesTotal;
	cout << "player1 stats are: \n";
	cout << "Points per Game: ";
	cout << ppg1;
	cout << "\nRebounds per Game: ";
	cout << rpg1;
	cout << "\nFouls per Game: ";
	cout << fpg1;


		return 0;
}