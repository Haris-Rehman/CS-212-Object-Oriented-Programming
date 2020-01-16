/*#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window.hpp>
#include <iostream>

class Game {
private:
	sf::RenderWindow window;
	sf::Texture gameBoard, pieceX, pieceO;
	sf::Sprite addBoard, addX, addO, piece[9];
	sf::Font fontType;
	sf::Text message;
	sf::IntRect square[9];
	sf::Vector2i position[9];
	sf::Event event;
public:
	void loadGameWindow();
	bool loadPieceFiles();
	bool loadFontFile();
	void setGamePieces();
	void setUserPrompt();
	void rectangleCoordinates();
	void setRectCoordinates(sf::IntRect &rect, int left, int top, int width, int height);
	void setPositionPieces(sf::Vector2i &pos, int left, int top);
	void positionPiece();
	bool isClickInBounds(int boardPos);
	bool takeTurn(int player);
	void updateUserPrompt(int turn, bool invalidPos);
	void gameLoop();

};

void Game::loadGameWindow() {
	window.create(sf::VideoMode(1280, 800), "Tic-Tac-Toe");
}

bool Game::loadPieceFiles() {
	gameBoard.loadFromFile("Assets/board2.png");
	addBoard.setPosition(sf::Vector2f(150, 120));
	pieceX.loadFromFile("Assets/X1.png");
	pieceO.loadFromFile("Assets/O1.png");

	return 1;
}

bool Game::loadFontFile() {
	return (fontType.loadFromFile("Assets/Prisma.ttf"));
}

void Game::setGamePieces() {
	addBoard.setTexture(gameBoard);
	addX.setTexture(pieceX);
	addO.setTexture(pieceO);
	sf::Vector2u size = pieceX.getSize();
	//size.x /= 3;
	//size.y /= 3;
	addX.setTextureRect(sf::IntRect(0, 0, size.x, size.y));
	addO.setTextureRect(sf::IntRect(0, 0, size.x, size.y));
}

void Game::setUserPrompt() {
	message.setString("Player 1's turn");
	message.setFont(fontType);
	message.setCharacterSize(40);
	message.setFillColor(sf::Color::White);
	message.move(100, 600);
}

void Game::updateUserPrompt(int turn, bool invalidPos) {
	std::string playerPrompt;
	if (invalidPos) {
		playerPrompt = "Position already\n     taken!";
	}
	else {
		playerPrompt = turn % 2 == 0 ? "Player 1's turn" : "Player 2's turn";
	}

	message.setString(playerPrompt);

}

void Game::setRectCoordinates(sf::IntRect &rect, int rectLeft, int rectTop, int rectWidth, int rectHeight) {
	rect.left = rectLeft;
	rect.top = rectTop;
	rect.width = rectWidth;
	rect.height = rectHeight;
}

void Game::rectangleCoordinates() {
	setRectCoordinates(square[0], 180, 150, 180, 180);
	setRectCoordinates(square[1], 360, 330, 380, 180);
	setRectCoordinates(square[2], 540, 510, 580, 180);

	setRectCoordinates(square[3], 180, 150, 200, 200);
	setRectCoordinates(square[4], 360, 330, 400, 400);
	setRectCoordinates(square[5], 540, 510, 600, 400);

	setRectCoordinates(square[6], 180, 150, 200, 600);
	setRectCoordinates(square[7], 360, 330, 400, 600);
	setRectCoordinates(square[8], 540, 510, 600, 600);
}

void Game::setPositionPieces(sf::Vector2i &pos, int left, int top) {
	pos.x = left;
	pos.y = top;

}

void Game::positionPiece() {
	setPositionPieces(position[0], 15, 20);
	setPositionPieces(position[1], 235, 20);
	setPositionPieces(position[2], 435, 20);

	setPositionPieces(position[3], 15, 230);
	setPositionPieces(position[4], 235, 230);
	setPositionPieces(position[5], 435, 230);

	setPositionPieces(position[6], 15, 440);
	setPositionPieces(position[7], 235, 440);
	setPositionPieces(position[8], 435, 440);


}

bool Game::isClickInBounds(int boardPos) {
	return (event.mouseButton.x >= square[boardPos].left
		&& event.mouseButton.x <= square[boardPos].width
		&& event.mouseButton.y >= square[boardPos].top
		&& event.mouseButton.y <= square[boardPos].height);

}

bool Game::takeTurn(int turn) {
	for (int boardPos = 0; boardPos < 9; boardPos++) {
		if (isClickInBounds(boardPos)) {
			if (square[boardPos].left != -600) {
				piece[turn] = turn % 2 == 0 ? addX : addO;
				piece[turn].move((float)position[boardPos].x, (float)position[boardPos].y);
				square[boardPos].left = -500;
				updateUserPrompt(turn, false);
				return true;
			}
			else {
				updateUserPrompt(turn, true);
				return false;
			}
		}
	}
	return false;
}

void Game::gameLoop() {
	int turn = 0;
	setUserPrompt();
	rectangleCoordinates();
	positionPiece();

	while (window.isOpen()) {
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}

			if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && turn < 9) {
				if (takeTurn(turn)) {
					turn++;
				}
			}

		}
		window.clear(sf::Color(0, 0, 0));
		window.draw(addBoard);
		window.draw(message);
		for (int pieceIdx = 0; pieceIdx < 9; pieceIdx++)
			window.draw(piece[pieceIdx]);
		window.display();

	}

}

int main(int argc, char *argv[]) {
	Game game;
	game.loadGameWindow();
	if (!game.loadPieceFiles())
		return EXIT_FAILURE;

	game.setGamePieces();

	if (!game.loadFontFile())
		return EXIT_FAILURE;

	game.gameLoop();

	return EXIT_SUCCESS;
} */