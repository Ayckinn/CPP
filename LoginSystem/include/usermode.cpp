/////////////////////////////// OBJECT CREATION ///////////////////////////////
UserMode::UserMode() {}
UserMode::~UserMode() {}

Logo 		user_logo;
FontColor 	user_fc;
Message 	user_msg;
FileAccess 	user_fax;
GuestMode 	user_guest;

/////////////////////////////////// METHODS ///////////////////////////////////
void UserMode::userMenu(const std::string& user_name)
{
	userInterface(user_name);

	user_fc.grey("\n\t[1].");
	user_fc.magenta(" DISPLAY MY INFOS\n");
	user_fc.grey("\t[2].");
	user_fc.magenta(" LOGOUT\n\n");

	user_fc.grey("\t[c]. ");
	user_fc.green("CHANGELOG\n");
	user_fc.grey("\t[q]. ");
	user_fc.green("QUIT\n");

	userChoice(user_name);

	return;
}
/*---------------------------------------------------------------------------*/
void UserMode::userInterface(const std::string& user_name)
{
	user_logo.logoBeta();
	user_logo.logoTitle();
	user_fc.green("\n\t(Connected) ");
	user_fc.blue("User ID");
	user_fc.white(" : ");
	user_fc.magenta(user_name);
	std::cout << std::endl;
	
	return;
}
/*---------------------------------------------------------------------------*/
void UserMode::displayFile(const std::string& user_name)
{
	userInterface(user_name);

	user_fc.magenta("\n\t- DISLAY MY INFOS -\n");
	user_fax.displayMyFile(user_name);

	return;
}
/*---------------------------------------------------------------------------*/
void UserMode::userChoice(const std::string& user_name)
{
	user_fc.blue("\n\tSelect an option : ");
	std::cin >> user_choice;
	
	switch(user_choice)
	{
		case '1':
			displayFile(user_name);
			userMenu(user_name);
			break;

		case '2':
			logOUT();
			user_guest.guestMenu();

		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '0':
			user_msg.printWarning("\tInvalid choice ! Please choose a number in the list..\n");
			userMenu(user_name);
			break;

		case 'c':
		case 'C':
			userInterface(user_name);
			user_fax.readChangelog();
			userMenu(user_name);
			break;

		case 'q':
		case 'Q':
			user_msg.quitApp(user_name);
			break;

		default:
			user_msg.printWarning("\tThis is not a number ! Please choose a number in the list.\n");
			userMenu(user_name);
			break;
	}
	return;
}
/*---------------------------------------------------------------------------*/
void UserMode::logOUT()
{
	user_msg.printWarning("\tYou're now disconnected !\n");
	sleep(1);
	return;
}
///////////////////////////////////////////////////////////////////////////////