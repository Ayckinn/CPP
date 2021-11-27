/////////////////////////////// OBJECT CREATION ///////////////////////////////
Message::Message() {}
Message::~Message() {}

FontColor msg_fc;

/////////////////////////////////// METHODS ///////////////////////////////////
void Message::printPlayerSign()
{
	msg_fc.magentaString("\n\t  Player 1 = X || Player 2 = -\n\n");
	return;
}
/*---------------------------------------------------------------------------*/
void Message::printPressEnterKey()
{
    msg_fc.whiteString("\n\n\t  Press ENTER to quit the game...\n");
    std::cin.ignore();
    std::cin.get();

    return;
}
/*---------------------------------------------------------------------------*/
void Message::printWarning(const std::string& warning_text)
{
    std::cout << std::endl;
    msg_fc.redString(warning_text);
    sleep(3);

    return;
}
/*---------------------------------------------------------------------------*/
void Message::quitApp()
{
    msg_fc.yellowString("\n\n\t  System exit... See you soon ^^\n");
    sleep(3);

    std::system("clear");
    std::exit(0);

    return;
}