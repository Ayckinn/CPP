#ifndef BOARD_HPP
#define BOARD_HPP


class BoardOfGame
{
	public:
		BoardOfGame();
		~BoardOfGame();

		void Board();
		void initBoard();
		int checkBoard();

		char pos[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

	private:
		//-- PASS
};
#endif  //-- BOARD_HPP