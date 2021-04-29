//File Name: Player Ranker
//Author: Joshua Nickens
//Email Address: jcnickens@my.milligan.edu
//Final Project
//Description: This program analyzes the stats of players in order to determine a league MVP
//Final Presentaion

#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include <valarray>
using namespace std;

int choice;
int numPlayers;
const double gamesTotal = 16.0;
const int maxPlayers = 60;
string player[maxPlayers];
int points[maxPlayers];
int rebounds[maxPlayers];
int fouls[maxPlayers];
int weekPoint[16];
int weeklyPlayer[60][16][16][16];
double ppg[maxPlayers];
//ppg stands for points per game
double rpg[maxPlayers];
//rpg stands for rebounds per game
double fpg[maxPlayers];
//fpg stands for fouls per game

struct node
{
	string player[maxPlayers];
	int points[maxPlayers];
	int rebounds[maxPlayers];
	int fouls[maxPlayers];
	node* next;
};

int main()
{
	cout << "Welcome to the Player Ranker \n";
	cout << "Starting new program.";
	cout << "Do you have total points or by game points?\n";
	cout << "1. Total points   2. By game points";
	cout << " :";
	cin >> choice;
	switch (choice)
	{
	case 1:
	{	cout << "Starting total point system\n";
	cout << "How many players are there? ";
	cin >> numPlayers;
	while (numPlayers < 0 || numPlayers > 60)
	{
		cout << "Please re-enter number of players.";
		cin >> numPlayers;
	}

	for (int i = 0; i < numPlayers; i++)
	{
		cout << "\nWhat is the player's name? ";
		cin >> player[i];
		cout << "How many points did they score? ";
		cin >> points[i];
		cout << "How many rebounds did they have? ";
		cin >> rebounds[i];
		cout << "How many times did they foul? ";
		cin >> fouls[i];
		ppg[i] = points[i] / gamesTotal;
		rpg[i] = rebounds[i] / gamesTotal;
		fpg[i] = fouls[i] / gamesTotal;
		cout << player[i] << "'s stats are: \n";
		cout << "Points per Game: ";
		cout << ppg[0] << " ";
		cout << "\nRebounds per Game: ";
		cout << rpg[0] << " ";
		cout << "\nFouls per Game: ";
		cout << fpg[0] << " ";
	}
	return 0;
	}
	case 2:
	{
		cout << "Starting by game system \n";
		cout << "How many players are there? ";
		cin >> numPlayers;
		if (numPlayers < 0 || numPlayers > 60)
		{
			cout << "Please re-enter the number of players.";
			cin >> numPlayers;
		}
		for (int i = 0; i < numPlayers; i++)
		{
			cout << "\nWhat is the player's name? ";
			cin >> player[i];
			cout << "Input their points for each game. \n";
			for (int k = 0; k <= 15; k++)
			{
				cin >> weekPoint[k];
			}
			valarray<int> weekPoint[15];


		}
	}
	case 3:
	{
		while (choice != 1 && choice != 2)
		{
			cout << "Not a valid choice.";
			cout << "Choose again.";
			cin >> choice;
		}
	}
	}
}

void printList(node* n)
{
	while (n != NULL)
	{
		for (int j = 0; j <= numPlayers; j++)
		{
			cout << n->player[j] << " ";
			cout << n->points[j] << " ";
			cout << n->rebounds[j] << " ";
			cout << n->fouls[j] << " ";
			n = n->next;
		}
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