#ifndef GAMEALGORITHM_HPP
#define GAMEALGORITHM_HPP


class GameAlgorithm
{
	public:
		GameAlgorithm();
		~GameAlgorithm();
		
		int gameLoop();
		void restartOrQuit();


	private:
		char sign;
		char retry;
		int player = 1, i, player_choice;
};
#endif //-- GAMEALGORITHM_HPP
