/////////////////////////////// OBJECT CREATION ///////////////////////////////
BoardOfGame::BoardOfGame(){}
BoardOfGame::~BoardOfGame(){}

FontColor board_fc;
Logo board_logo;
Message board_msg;

/////////////////////////////////// METHODS ///////////////////////////////////
void BoardOfGame::Board()
{
	std::system("clear");
	std::cout << std::endl;

	// board_logo.logoBeta();
	board_logo.logoTitle();
	board_msg.printPlayerSign();
	
	board_fc.greyString("\n\t\t     |     |     ");
	board_fc.greyString("\n\t\t  ");
	board_fc.greyChar(pos[0]);
	board_fc.greyString("  |  ");
	board_fc.greyChar(pos[1]);
	board_fc.greyString("  |  ");
	board_fc.greyChar(pos[2]);
	board_fc.greyString("\n\t\t_____|_____|_____");
	board_fc.greyString("\n\t\t     |     |     ");
	board_fc.greyString("\n\t\t  ");
	board_fc.greyChar(pos[3]);
	board_fc.greyString("  |  ");
	board_fc.greyChar(pos[4]);
	board_fc.greyString("  |  ");
	board_fc.greyChar(pos[5]);
	board_fc.greyString("\n\t\t_____|_____|_____");
	board_fc.greyString("\n\t\t     |     |     ");
	board_fc.greyString("\n\t\t  ");
	board_fc.greyChar(pos[6]);
	board_fc.greyString("  |  ");
	board_fc.greyChar(pos[7]);
	board_fc.greyString("  |  ");
	board_fc.greyChar(pos[8]);
	board_fc.greyString("\n\t\t     |     |     ");

	std::cout << std::endl << std::endl;

	return;
}
/*---------------------------------------------------------------------------*/
int BoardOfGame::checkBoard()
{
	if(pos[0] == pos[1] && pos[1] == pos[2])
		return 1;

	else if(pos[3] == pos[4] && pos[4] == pos[5])
		return 1;

	else if(pos[6] == pos[7] && pos[7] == pos[8])
		return 1;

	else if(pos[0] == pos[3] && pos[3] == pos[6])
		return 1;

	else if(pos[1] == pos[4] && pos[4] == pos[7])
		return 1;

	else if(pos[2] == pos[5] && pos[5] == pos[8])
		return 1;

	else if(pos[0] == pos[4] && pos[4] == pos[8])
		return 1;

	else if(pos[2] == pos[4] && pos[4] == pos[6])
		return 1;

	else if(pos[0] != '1' && pos[1] != '2' && pos[2] != '3' && pos[3] != '4'
		&& pos[4] != '5' && pos[5] != '6' && pos[6] != '7' && pos[7] != '8' && pos[8] != '9')
		return 0;

	else
		return -1;
}
/*---------------------------------------------------------------------------*/
void BoardOfGame::initBoard()
{
	pos[0] = '1';
	pos[1] = '2';
	pos[2] = '3';
	pos[3] = '4';
	pos[4] = '5';
	pos[5] = '6';
	pos[6] = '7';
	pos[7] = '8';
	pos[8] = '9';

	return;
}