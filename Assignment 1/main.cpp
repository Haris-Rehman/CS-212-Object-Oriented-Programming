/*#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <iostream>

using namespace std;

int main()
{
	
	int flag[9] = { 0 };
	int player = 1;

	sf::SoundBuffer buffer;

	if (!buffer.loadFromFile("Assets/bgm.ogg"))
		return -1;

	sf::Sound sound;
	sound.setLoop(true);
	sound.setBuffer(buffer);
	sound.play();

	// create the window
	sf::RenderWindow window(sf::VideoMode(1280, 800), "Play TicTacToe");

	sf::Texture boardTexture;

	if (!boardTexture.loadFromFile("Assets/board1.png"))
	{
		// error...
	}

	sf::Texture X;

	if (!X.loadFromFile("Assets/X.png"))
	{
		// error...
	}

	sf::Texture O;

	if (!O.loadFromFile("Assets/O.png"))
	{
		// error...
	}

	
	sf::Sprite board;
	sf::Sprite piece[9];


	board.setTexture(boardTexture);

	for (int i = 0; i < 10; i += 2) {
		piece[i].setScale(sf::Vector2f(.40f, .40f));
		//piece[i].setTexture(X);

	}

	for (int k = 1; k < 10; k += 2){
		piece[k].setScale(sf::Vector2f(.40f, .40f));
		//piece[k].setTexture(O);
}


	board.setPosition(sf::Vector2f(150, 120));
	board.setScale(sf::Vector2f(1.5f, 1.5f));


	sf::RectangleShape rectangle(sf::Vector2f(20, 800));
	rectangle.setPosition(sf::Vector2f(850, 0));

	sf::Font font;
	if (!font.loadFromFile("PressStart2P.ttf"))
	{
		cout << "Error loading font" << endl;
	}

	sf::Text text;
	text.setFont(font);
	text.setString("TicTacToe");
	text.setCharacterSize(36);
	text.setFillColor(sf::Color::White);
	text.setPosition(905, 20);




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
		window.draw(board);
		window.draw(rectangle);
		window.draw(text);

			
			
			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 180 && sf::Mouse::getPosition(window).x <= 360 && sf::Mouse::getPosition(window).y <= 330 && sf::Mouse::getPosition(window).y >= 150) {
				
				if (player == 1 && flag[0] == 0 ) {
					flag[0] = player;
					player = 2;
				}
				else if(player == 2 && flag[0] == 0 ) {
					flag[0] = player;
					player = 1;
				}


			}
			else

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 360 && sf::Mouse::getPosition(window).x <= 540 && sf::Mouse::getPosition(window).y <= 330 && sf::Mouse::getPosition(window).y >= 150) {
					
				if (player == 1 && flag[1] == 0) {
					flag[1] = player;
					player = 2;
				}
				else if (player == 2 && flag[1] == 0) {
					flag[1] = player;
					player = 1;
				}
				}
				else

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 540 && sf::Mouse::getPosition(window).x <= 720 && sf::Mouse::getPosition(window).y <= 330 && sf::Mouse::getPosition(window).y >= 150) {
				if (player == 1 && flag[2] == 0) {
					flag[2] = player;
					player = 2;
				}
				else if (player == 2 && flag[2] == 0) {
					flag[2] = player;
					player = 1;
				}
					}
					else

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 180 && sf::Mouse::getPosition(window).x <= 360 && sf::Mouse::getPosition(window).y <= 510 && sf::Mouse::getPosition(window).y >= 330) {
				if (player == 1 && flag[3] == 0) {
					flag[3] = player;
					player = 2;
				}
				else if (player == 2 && flag[3] == 0) {
					flag[3] = player;
					player = 1;
				}
							
						}
						else

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 360 && sf::Mouse::getPosition(window).x <= 540 && sf::Mouse::getPosition(window).y <= 510 && sf::Mouse::getPosition(window).y >= 330) {
				if (player == 1 && flag[4] == 0) {
					flag[4] = player;
					player = 2;
				}
				else if (player == 2 && flag[4] == 0) {
					flag[4] = player;
					player = 1;
				}
							}
							else

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 540 && sf::Mouse::getPosition(window).x <= 720 && sf::Mouse::getPosition(window).y <= 510 && sf::Mouse::getPosition(window).y >= 330) {
				if (player == 1 && flag[5] == 0) {
					flag[5] = player;
					player = 2;
				}
				else if (player == 2 && flag[5] == 0) {
					flag[5] = player;
					player = 1;
				}
								}
								else

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 180 && sf::Mouse::getPosition(window).x <= 360 && sf::Mouse::getPosition(window).y <= 690 && sf::Mouse::getPosition(window).y >= 510) {
				if (player == 1 && flag[6] == 0) {
					flag[6] = player;
					player = 2;
				}
				else if (player == 2 && flag[6] == 0) {
					flag[6] = player;
					player = 1;
				}
									}
									else

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 360 && sf::Mouse::getPosition(window).x <= 540 && sf::Mouse::getPosition(window).y <= 690 && sf::Mouse::getPosition(window).y >= 510) {
				if (player == 1 && flag[7] == 0) {
					flag[7] = player;
					player = 2;
				}
				else if (player == 2 && flag[7] == 0) {
					flag[7] = player;
					player = 1;
				}
										}
										else

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && sf::Mouse::getPosition(window).x >= 540 && sf::Mouse::getPosition(window).x <= 720 && sf::Mouse::getPosition(window).y <= 690 && sf::Mouse::getPosition(window).y >= 510) {
				if (player == 1 && flag[8] == 0) {
					flag[8] = player;
					player = 2;
				}
				else if (player == 2 && flag[8] == 0) {
					flag[8] = player;
					player = 1;
				}
											}
	
			if (flag[0] == 1){
				piece[0].setTexture(X);
				piece[0].setPosition(180,150);

				window.draw(piece[0]);
			}
			else if(flag[0] ==2) {
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

		window.display();

		}
	

		for (int j = 0; j<9;j++)
		window.draw(piece[j]);

		
	}

 */