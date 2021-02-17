//File Name: Player Ranker
//Author: Josh Nickens
//Email Address: jcnickens@my.milligan.edu
//Term Project
//Description: This program analyzes the stats of players in order to determine a league MVP
//PM04
//Last Changed: 2/14/21

#include <iostream>
#include <string>
using namespace std;

int numberPlayers;
string player1, player2, player3, player4;
int points1, points2, points3, points4;
int rebounds1, rebounds2, rebounds3, rebounds4;
int fouls1, fouls2, fouls3, fouls4;
double ppg1, ppg2, ppg3, ppg4; 
//testing
double rpg1, rpg2, rpg3, rpg4;
double fpg1, fpg2, fpg3, fpg4;
const double gamesTotal = 16.0;
//gamesTotal will be constant for all teams barring any cancelations or forfeits

int main()
{
	cout << "Welcome to the Player Ranker \n";
	cout << "How many players are there? ";
	cin >> numberPlayers;
	int i = 1;
	cout << "\nWhat is the player's name? ";
	cin >> player1;
	cout << "How many points did they score? ";
	cin >> points1;
	cout << "How many rebounds did they have? ";
	cin >> rebounds1;
	cout << "How many times did they foul? ";
	cin >> fouls1;
	i++;
	cout << "\nWhat is the player's name? ";
	cin >> player2;
	cout << "How many points did they score? ";
	cin >> points2;
	cout << "How many rebounds did they have? ";
	cin >> rebounds2;
	cout << "How many times did they foul? ";
	cin >> fouls2;
	i++;
	if (i <= numberPlayers)
	{
		cout << "\nWhat is the player's name? ";
		cin >> player3;
		cout << "How many points did they score? ";
		cin >> points3;
		cout << "How many rebounds did they have? ";
		cin >> rebounds3;
		cout << "How many times did they foul? ";
		cin >> fouls3;
		i++;
		if (i <= numberPlayers)
		{
			cout << "\nWhat is the player's name? ";
			cin >> player4;
			cout << "How many points did they score? ";
			cin >> points4;
			cout << "How many rebounds did they have? ";
			cin >> rebounds4;
			cout << "How many times did they foul? ";
			cin >> fouls4;
		}
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