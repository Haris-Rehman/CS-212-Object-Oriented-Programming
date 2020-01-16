# include <iostream>
# include "Header.h"
using namespace std;
int main()
{
	char n;
	do
	{
		Tictac game;
		int start;
		int player, i;
		char choice;
		int check;
		cout << "Enter 1 to start new game.\nEnter 2 to start load game  :\t";
		cin >> start;
		if (start == 1)
		{
			player = 1;
			Tictac();
		}
		else if (start == 2)
		{
			player = game.LoadGame();
			game.board();
			int z;
			z = game.checkwin();
			if (z == 0 || z == 1)
				return 0;
		}
		do
		{
			game.board();
			player = (player % 2) ? 1 : 2;
			cout << "Enter s to save, q to quit game.\n";
			cout << "\tPlayer " << player << ", enter a number:  ";
			cin >> choice;
			check = game.Put(player, choice);
			if (check == 0)
				return 0;
			else if (check == -1)
			{
				cout << "Game Saved";
				player--;
			}
			i = game.checkwin();
			player++;
		} while (i == -1);
		game.board();
		if (i == 1)
			cout << "==>\aPlayer " << --player << " win ";
		else
			cout << "==>\aGame draw";
		game.SaveGame(player);
		cout << endl << "Saved\t\t";
		cin.ignore();
		cin.get();
		cout << endl << endl;
		cout << "Do you want to start new game? y=yes, n=no :";
		cin.ignore();
		cin >> n;
		if (n == 'n')
			return 0;
		system("CLS");
	} while (n != 'n');
}
 
