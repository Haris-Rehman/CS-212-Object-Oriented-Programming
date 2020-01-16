# include <iostream>
using namespace std;
class Tictac
{
private:
	char square[10];
public:
	Tictac();
	int Put(int, int);
	int checkwin();
	void board();
	void SaveGame(int);
	int LoadGame();
};	
