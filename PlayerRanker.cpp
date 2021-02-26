//File Name: Player Ranker
//Author: Josh Nickens
//Email Address: jcnickens@my.milligan.edu
//Term Project
//Description: This program analyzes the stats of players in order to determine a league MVP
//PM06
//Last Changed: 2/26/21

#include <iostream>
#include <string>
using namespace std;

int choice;
int numPlayers;
const int maxPlayers = 60;
string player1, player2, player3, player4;
int points1, points2, points3, points4;
int rebounds1, rebounds2, rebounds3, rebounds4;
int fouls1, fouls2, fouls3, fouls4;
double ppg[maxPlayers]; 
double rpg[maxPlayers];
double fpg[maxPlayers];
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
	ppg[0] = points1 / gamesTotal;
	rpg[0] = rebounds1 / gamesTotal;
	fpg[0] = fouls1 / gamesTotal;
	cout << "player1 stats are: \n";
	cout << "Points per Game: ";
	cout << ppg[0];
	cout << "\nRebounds per Game: ";
	cout << rpg[0];
	cout << "\nFouls per Game: ";
	cout << fpg[0];


		return 0;
}