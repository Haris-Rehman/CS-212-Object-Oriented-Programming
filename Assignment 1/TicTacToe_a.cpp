#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>

using namespace std;

class Game{

private:
	int menuOption = 0;
	int player = 1;
	int flag[9] = { 0 };
	sf::SoundBuffer buffer;
	sf::Sound sound;
	sf::Texture boardTexture;
	sf::Texture X;
	sf::Texture O;
	sf::Texture title;
	sf::Sprite menuTitle;
	sf::Sprite board;
	sf::Sprite piece[9];
	sf::Text text;
	sf::Text mNewGame;
	sf::Text mHighScore;
	sf::Text showHighScore;
	sf::Text mExit;
	sf::Text playerWin;
	sf::Text playerPiece;
	sf::Font font;
	sf::RenderWindow window;




public:

	Game() {

		createWindow();
		playBGM();
		loadTextures();
		newGame();
		move();


	}

		int playBGM() {
	
		if (!buffer.loadFromFile("Assets/bgm.ogg"))
			return -1;
		sound.setLoop(true);
		sound.setBuffer(buffer);
		sound.play();
	
	}


	void loadTextures() {
		if (!X.loadFromFile("Assets/X.png"))
		{
			// error...
		}

		if (!O.loadFromFile("Assets/O.png"))
		{
			// error...
		}

		if (!boardTexture.loadFromFile("Assets/board1.png"))
		{
			// error...
		}
		if (!title.loadFromFile("Assets/title.png"))
		{
			// error...
		}
	}

	/*void menu() {

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 250 && sf::Mouse::getPosition(window).x <= 650 && sf::Mouse::getPosition(window).y <= 330 && sf::Mouse::getPosition(window).y >= 180) {
				menuOption = 1;
			}
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 250 && sf::Mouse::getPosition(window).x <= 650 && sf::Mouse::getPosition(window).y <= 510 && sf::Mouse::getPosition(window).y >= 330) {
				menuOption = 2;
			}
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 250 && sf::Mouse::getPosition(window).x <= 650 && sf::Mouse::getPosition(window).y <= 690 && sf::Mouse::getPosition(window).y >= 510) {
				menuOption = 3;
			}
		
	}*/

	int play() {

		window.draw(board);
		sf::RectangleShape rectangle(sf::Vector2f(20, 800));
		rectangle.setPosition(sf::Vector2f(850, 0));

		window.draw(rectangle);
		window.draw(text);

		if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 180 && sf::Mouse::getPosition(window).x <= 360 && sf::Mouse::getPosition(window).y <= 330 && sf::Mouse::getPosition(window).y >= 150) {

			if (player == 1 && flag[0] == 0) {
				flag[0] = player;
				player = 2;
			}
			else if (player == 2 && flag[0] == 0) {
				flag[0] = player;
				player = 1;
			}


		}
		else

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 360 && sf::Mouse::getPosition(window).x <= 540 && sf::Mouse::getPosition(window).y <= 330 && sf::Mouse::getPosition(window).y >= 150) {

				if (player == 1 && flag[1] == 0 && !checkWin()) {
					flag[1] = player;
					player = 2;
				}
				else if (player == 2 && flag[1] == 0 && !checkWin()) {
					flag[1] = player;
					player = 1;
				}
			}
			else

				if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 540 && sf::Mouse::getPosition(window).x <= 720 && sf::Mouse::getPosition(window).y <= 330 && sf::Mouse::getPosition(window).y >= 150) {
					if (player == 1 && flag[2] == 0 && !checkWin()) {
						flag[2] = player;
						player = 2;
					}
					else if (player == 2 && flag[2] == 0 && !checkWin()) {
						flag[2] = player;
						player = 1;
					}
				}
				else

					if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 180 && sf::Mouse::getPosition(window).x <= 360 && sf::Mouse::getPosition(window).y <= 510 && sf::Mouse::getPosition(window).y >= 330) {
						if (player == 1 && flag[3] == 0 && !checkWin()) {
							flag[3] = player;
							player = 2;
						}
						else if (player == 2 && flag[3] == 0 && !checkWin()) {
							flag[3] = player;
							player = 1;
						}

					}
					else

						if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 360 && sf::Mouse::getPosition(window).x <= 540 && sf::Mouse::getPosition(window).y <= 510 && sf::Mouse::getPosition(window).y >= 330) {
							if (player == 1 && flag[4] == 0 && !checkWin()) {
								flag[4] = player;
								player = 2;
							}
							else if (player == 2 && flag[4] == 0 && !checkWin()) {
								flag[4] = player;
								player = 1;
							}
						}
						else

							if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 540 && sf::Mouse::getPosition(window).x <= 720 && sf::Mouse::getPosition(window).y <= 510 && sf::Mouse::getPosition(window).y >= 330) {
								if (player == 1 && flag[5] == 0 && !checkWin()) {
									flag[5] = player;
									player = 2;
								}
								else if (player == 2 && flag[5] == 0 && !checkWin()) {
									flag[5] = player;
									player = 1;
								}
							}
							else

								if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 180 && sf::Mouse::getPosition(window).x <= 360 && sf::Mouse::getPosition(window).y <= 690 && sf::Mouse::getPosition(window).y >= 510) {
									if (player == 1 && flag[6] == 0 && !checkWin()) {
										flag[6] = player;
										player = 2;
									}
									else if (player == 2 && flag[6] == 0 && !checkWin()) {
										flag[6] = player;
										player = 1;
									}
								}
								else

									if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 360 && sf::Mouse::getPosition(window).x <= 540 && sf::Mouse::getPosition(window).y <= 690 && sf::Mouse::getPosition(window).y >= 510) {
										if (player == 1 && flag[7] == 0 && !checkWin()) {
											flag[7] = player;
											player = 2;
										}
										else if (player == 2 && flag[7] == 0 && !checkWin()) {
											flag[7] = player;
											player = 1;
										}
									}
									else

										if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 540 && sf::Mouse::getPosition(window).x <= 720 && sf::Mouse::getPosition(window).y <= 690 && sf::Mouse::getPosition(window).y >= 510) {
											if (player == 1 && flag[8] == 0 && !checkWin()) {
												flag[8] = player;
												player = 2;
											}
											else if (player == 2 && flag[8] == 0 && !checkWin()) {
												flag[8] = player;
												player = 1;
											}
										}

		if (flag[0] == 1) {
			piece[0].setTexture(X);
			piece[0].setPosition(180, 150);

			window.draw(piece[0]);
		}
		else if (flag[0] == 2) {
			piece[0].setTexture(O);
			piece[0].setPosition(180, 150);
			window.draw(piece[0]);
		}

		if (flag[1] == 1) {
			piece[1].setTexture(X);
			piece[1].setPosition(360, 150);
			window.draw(piece[1]);
		}
		else if (flag[1] == 2) {
			piece[1].setTexture(O);
			piece[1].setPosition(360, 150);
			window.draw(piece[1]);
		}
		if (flag[2] == 1) {
			piece[2].setTexture(X);
			piece[2].setPosition(540, 150);
			window.draw(piece[2]);
		}
		else if (flag[2] == 2) {
			piece[2].setTexture(O);
			piece[2].setPosition(540, 150);
			window.draw(piece[2]);
		}
		if (flag[3] == 1) {
			piece[3].setTexture(X);
			piece[3].setPosition(180, 330);
			window.draw(piece[3]);
		}
		else if (flag[3] == 2) {
			piece[3].setTexture(O);
			piece[3].setPosition(180, 330);
			window.draw(piece[3]);
		}
		if (flag[4] == 1) {
			piece[4].setTexture(X);
			piece[4].setPosition(360, 330);
			window.draw(piece[4]);
		}
		else if (flag[4] == 2) {
			piece[4].setTexture(O);
			piece[4].setPosition(360, 330);
			window.draw(piece[4]);
		}
		if (flag[5] == 1) {
			piece[5].setTexture(X);
			piece[5].setPosition(540, 330);
			window.draw(piece[5]);
		}
		else if (flag[5] == 2) {
			piece[5].setTexture(O);
			piece[5].setPosition(540, 330);
			window.draw(piece[5]);
		}
		if (flag[6] == 1) {
			piece[6].setTexture(X);
			piece[6].setPosition(180, 510);
			window.draw(piece[6]);
		}
		else if (flag[6] == 2) {
			piece[6].setTexture(O);
			piece[6].setPosition(180, 510);
			window.draw(piece[6]);
		}
		if (flag[7] == 1) {
			piece[7].setTexture(X);
			piece[7].setPosition(360, 510);
			window.draw(piece[7]);
		}
		else if (flag[7] == 2) {
			piece[7].setTexture(O);
			piece[7].setPosition(360, 510);
			window.draw(piece[7]);
		}
		if (flag[8] == 1) {
			piece[8].setTexture(X);
			piece[8].setPosition(540, 510);
			window.draw(piece[8]);
		}
		else if (flag[8] == 2) {
			piece[8].setTexture(O);
			piece[8].setPosition(540, 510);
			window.draw(piece[8]);
		}

		if (player == 1) {
			playerPiece.setString("X");
		}
		else if (player == 2) {
			playerPiece.setString("O");
		}

		window.draw(playerPiece);

		checkWin();
		if (checkWin() == 1)
		{
			playerWin.setFont(font);
			if (player == 1)
				playerWin.setString("Player 2 wins");
			else if (player == 2)
				playerWin.setString("Player 1 wins");
			playerWin.setCharacterSize(36);
			playerWin.setFillColor(sf::Color::White);
			playerWin.setPosition(20, 20);
			window.draw(playerWin);
			}

		return 1;
	}

	int checkWin() {

		if (flag[0] == flag[1] && flag[1] == flag[2] && flag[0] != 0)
			return 1;

		else if (flag[3] == flag[4] && flag[4] == flag[5] && flag[3] != 0)
			return 1;

		else if (flag[6] == flag[7] && flag[7] == flag[8] && flag[6] != 0)
			return 1;

		else if (flag[0] == flag[3] && flag[3] == flag[6] && flag[0] != 0)
			return 1;

		else if (flag[1] == flag[4] && flag[4] == flag[7] && flag[1] != 0)
			return 1;

		else if (flag[2] == flag[5] && flag[5] == flag[8] && flag[2] != 0)
			return 1;

		else if (flag[0] == flag[4] && flag[4] == flag[8] && flag[0] != 0)
			return 1;

		else if (flag[2] == flag[4] && flag[4] == flag[6] && flag[2] != 0)
			return 1;

		else
			return 0;
	}

	void newGame() {
		board.setTexture(boardTexture);
		board.setPosition(sf::Vector2f(150, 120));
		board.setScale(sf::Vector2f(1.5f, 1.5f));

		for (int i = 0; i < 10; i++) {
			piece[i].setScale(sf::Vector2f(.40f, .40f));
			}

		//sf::RectangleShape rectangle(sf::Vector2f(20, 800));
		//rectangle.setPosition(sf::Vector2f(850, 0));

		if (!font.loadFromFile("PressStart2P.ttf"))
		{
			cout << "Error loading font" << endl;
		}

		text.setFont(font);
		text.setString("TicTacToe");
		text.setCharacterSize(96);
		text.setFillColor(sf::Color::White);
		text.setPosition(905, 20);

		mNewGame.setFont(font);
		mNewGame.setString("New Game");
		mNewGame.setCharacterSize(48);
		mNewGame.setFillColor(sf::Color::White);
		mNewGame.setPosition(250, 180);

		mHighScore.setFont(font);
		mHighScore.setString("High Scores");
		mHighScore.setCharacterSize(48);
		mHighScore.setFillColor(sf::Color::White);
		mHighScore.setPosition(250, 360);

		showHighScore.setFont(font);
		showHighScore.setString("There are no highscores in life. What matters is that\n you do your best, and be content with what you have.");
		showHighScore.setCharacterSize(21);
		showHighScore.setFillColor(sf::Color::White);
		showHighScore.setPosition(100, 180);

		mExit.setFont(font);
		mExit.setString("Exit");
		mExit.setCharacterSize(48);
		mExit.setFillColor(sf::Color::White);
		mExit.setPosition(250, 540);

		playerPiece.setFont(font);
		playerPiece.setCharacterSize(300);
		playerPiece.setFillColor(sf::Color::White);
		playerPiece.setPosition(950, 180);

		menuTitle.setTexture(title);
		menuTitle.setPosition(369,0);


		}

	void createWindow() {
		
		window.create(sf::VideoMode(1280,800), "Play TicTacToe");
	}

	void move() {
		// run the program as long as the window is open
		while (window.isOpen())
		{
			// check all the window's events that were triggered since the last iteration of the loop
			sf::Event event;
			while (window.pollEvent(event))
			{
				// "close requested" event: we close the window
				if (event.type == sf::Event::Closed)
					window.close();
			}

			// clear the window with black color
			window.clear(sf::Color::Black);

			// draw everything here...

			play();

			/*window.draw(menuTitle);
			window.draw(mNewGame);
			window.draw(mHighScore);
			window.draw(mExit);
//			menu();

			/*if (menuOption == 1) {
				window.clear();
				play();
			}
			if (menuOption == 2) {
				window.clear();
				window.draw(showHighScore);
			}
			if (menuOption == 3) {
				window.clear();
				window.close();
			}*/

				window.display();

			

		}



	}
	
};

int main() {

	Game newgame;


}