# include <iostream>
# include "Header.h"
# include <fstream>
Tictac::Tictac()// default constructor
{
	square[1] = { '1' };
	square[2] = { '2' };
	square[3] = { '3' };
	square[4] = { '4' };
	square[5] = { '5' };
	square[6] = { '6' };
	square[7] = { '7' };
	square[8] = { '8' };
	square[9] = { '9' };
}
int Tictac::Put(int player, int choice) // founction to mark the place
{
	char mark = (player == 1) ? 'X' : 'O';
	if (choice == '1' && square[1] == '1')
		square[1] = mark;
	else if (choice == '2' && square[2] == '2')
		square[2] = mark;
	else if (choice == '3' && square[3] == '3')
		square[3] = mark;
	else if (choice == '4' && square[4] == '4')
		square[4] = mark;
	else if (choice == '5' && square[5] == '5')
		square[5] = mark;
	else if (choice == '6' && square[6] == '6')
		square[6] = mark;
	else if (choice == '7' && square[7] == '7')
		square[7] = mark;
	else if (choice == '8' && square[8] == '8')
		square[8] = mark;
	else if (choice == '9' && square[9] == '9')
		square[9] = mark;
	else if (choice == 's')
	{
		SaveGame(player);
		return -1;
	}
	else if (choice == 'q')
		return 0;
	else
	{
		cout << "Invalid move ";
		player--;
		cin.ignore();
		cin.get();
	}
}
/*********************************************
FUNCTION TO RETURN GAME STATUS
1 FOR GAME IS OVER WITH RESULT
-1 FOR GAME IS IN PROGRESS
O GAME IS OVER AND NO RESULT
**********************************************/
int Tictac::checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])
		return 1;
	else if (square[4] == square[5] && square[5] == square[6])
		return 1;
	else if (square[7] == square[8] && square[8] == square[9])
		return 1;
	else if (square[1] == square[4] && square[4] == square[7])
		return 1;
	else if (square[2] == square[5] && square[5] == square[8])
		return 1;
	else if (square[3] == square[6] && square[6] == square[9])
		return 1;
	else if (square[1] == square[5] && square[5] == square[9])
		return 1;
	else if (square[3] == square[5] && square[5] == square[7])
		return 1;
	else if (square[1] != '1'&& square[2] != '2'&& square[3] != '3'
		&& square[4] != '4'&& square[5] != '5'&& square[6] != '6'
		&& square[7] != '7'&& square[8] != '8'&& square[9] != '9')
		return 0;
	else
		return -1;
}
/*******************************************************************
FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK
********************************************************************/
void Tictac::board()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";
	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
	cout << "     |     |     " << endl << endl;
}
void Tictac::SaveGame(int player)
{
	ofstream myfile("HarisGame.txt");
	myfile << square[1] << endl;
	myfile << square[2] << endl;
	myfile << square[3] << endl;
	myfile << square[4] << endl;
	myfile << square[5] << endl;
	myfile << square[6] << endl;
	myfile << square[7] << endl;
	myfile << square[8] << endl;
	myfile << square[9] << endl;
	myfile << player << endl;
}
int Tictac::LoadGame()
{
	int player;
	ifstream myfile("HarisGame.txt");
	for (int a = 1; a <= 10; a++)
	{
		if (a <= 9 && a >= 1)
			myfile >> square[a];
		else if (a == 10)
			myfile >> player;
	}
	return player;
}
