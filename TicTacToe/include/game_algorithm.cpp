/////////////////////////////// OBJECT CREATION ///////////////////////////////
GameAlgorithm::GameAlgorithm(){}
GameAlgorithm::~GameAlgorithm(){}

FontColor algo_fc;
BoardOfGame algo_board;
Message algo_msg;

/////////////////////////////////// METHODS ///////////////////////////////////
int GameAlgorithm::gameLoop()
{
	do
	{
		algo_board.Board();

		player = (player%2) ? 1 : 2;

		std::cout << "\n\t\033[0;36m  Player " << player << ", choose a position : ";

		std::cin >> player_choice;
		std::cout << "\033[0;m";

		sign = (player == 1) ? 'X' : '-';


		if(player_choice == 1 && algo_board.pos[0] == '1')
			algo_board.pos[0] = sign;

		else if(player_choice == 2 && algo_board.pos[1] == '2')
			algo_board.pos[1] = sign;

		else if(player_choice == 3 && algo_board.pos[2] == '3')
			algo_board.pos[2] = sign;

		else if(player_choice == 4 && algo_board.pos[3] == '4')
			algo_board.pos[3] = sign;

		else if(player_choice == 5 && algo_board.pos[4] == '5')
			algo_board.pos[4] = sign;

		else if(player_choice == 6 && algo_board.pos[5] == '6')
			algo_board.pos[5] = sign;

		else if(player_choice == 7 && algo_board.pos[6] == '7')
			algo_board.pos[6] = sign;

		else if(player_choice == 8 && algo_board.pos[7] == '8')
			algo_board.pos[7] = sign;

		else if(player_choice == 9 && algo_board.pos[8] == '9')
			algo_board.pos[8] = sign;

		else
		{
			if(player_choice < 1 || player_choice > 9)
			{
				algo_msg.printWarning("\t  Wrong choice ! Please choose a position in the game...\n");
				player--;
			}

			else
			{
				algo_msg.printWarning("\t  This position is already used ! Please choose another one...\n");
				player--;
			}
		}

		i = algo_board.checkBoard();
		player++;

	}while(i == -1);

	algo_board.Board();

	if(i == 1)
	{
		std::cout << "\n\t\033[1;32m  Player " << --player << " wins the game !\033[1;m";
		restartOrQuit();
	}

	else
	{
		std::cout << "\n\t\033[1;37m  White game !\033[1;m";
		restartOrQuit();
	}
	return 0;
}
/*---------------------------------------------------------------------------*/
void GameAlgorithm::restartOrQuit()
{
	std::cout << "\n\t\n\t\033[0;35m  Would you like to play again (y/n) ? ";
	std::cin >> retry;
	std::cout << "\033[1;m";

	switch(retry)
	{
		case 'y':
		case 'Y':
			std::cout << "\n\t\033[1;38m  Player " << player << " first !\n\033[1;m";
			algo_board.initBoard();
			sleep(2);
			gameLoop();
			break;

		case 'n':
		case 'N':
			algo_msg.quitApp();
			break;

		default:
			algo_msg.printWarning("\n\t  Wrong choice !\n");
			restartOrQuit();
			break;
	}
}