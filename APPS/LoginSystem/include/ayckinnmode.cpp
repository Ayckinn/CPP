/////////////////////////////// OBJECT CREATION ///////////////////////////////
AyckinnMode::AyckinnMode() {}
AyckinnMode::~AyckinnMode() {}

Logo 		ayckinn_logo;
FontColor 	ayckinn_fc;
Message 	ayckinn_msg;
FileAccess  ayckinn_fax;
UserMode 	ayckinn_user;
GuestMode 	ayckinn_guest;

DebugMode 	ayckinn_debug;

/////////////////////////////////// METHODS ///////////////////////////////////
void AyckinnMode::ayckinnMenu(const std::string& user_name)
{
	ayckinnInterface();

	ayckinn_fc.grey("\n\t[1].");
	ayckinn_fc.magenta(" DISPLAY MY INFOS\n");
	ayckinn_fc.grey("\t[2].");
	ayckinn_fc.magenta(" NUMBER OF USERS\n");
	ayckinn_fc.grey("\t[3].");
	ayckinn_fc.magenta(" REMOVE USER ACCOUNT\n");
	ayckinn_fc.grey("\t[4].");
	ayckinn_fc.magenta(" LOGOUT\n\n");

	ayckinn_fc.grey("\t[c]. ");
	ayckinn_fc.green("CHANGELOG\n");
	ayckinn_fc.grey("\t[q]. ");
	ayckinn_fc.green("QUIT\n");

	ayckinnChoice(user_name);

	return;
}
/*---------------------------------------------------------------------------*/
void AyckinnMode::ayckinnInterface()
{
	ayckinn_logo.logoBeta();
	ayckinn_logo.logoTitle();
	ayckinn_fc.green("\n\t(Connected) ");
	ayckinn_fc.blue("Root ID");
	ayckinn_fc.white(" : ");
	ayckinn_fc.magenta("Ayckinn\n");
	
	return;
}
/*---------------------------------------------------------------------------*/
void AyckinnMode::displayFile(const std::string& user_name)
{
	ayckinnInterface();

	ayckinn_fc.magenta("\n\t- DISPLAY MY INFOS -\n");
	ayckinn_fax.displayMyFile(user_name);

	return;
}
/*---------------------------------------------------------------------------*/
void AyckinnMode::howManyUsers()
{
	ayckinnInterface();

	ayckinn_fc.magenta("\n\t- NUMBER OF USERS : How many users in the accounts folder -\n");
	ayckinn_fax.userFilesInFolder();

	return;
}
/*---------------------------------------------------------------------------*/
void AyckinnMode::removeUserAccount()
{
	ayckinnInterface();

	ayckinn_msg.printCategoryInfo("\t- REMOVE USER ACCOUNT : (Root only) -");
	ayckinn_msg.manageUsername("\n\tEnter account to delete : ");

	std::ifstream user_remove_file("users/" + ayckinn_msg.username + ".id");
	getline(user_remove_file, ayckinn_fax.user_id);


	if(ayckinn_msg.username == "0")
	{
		ayckinn_msg.printBackToMenu();
		ayckinnMenu(ayckinn_msg.username);
	}

	else if(ayckinn_msg.username == "q" || ayckinn_msg.username == "Q")
		ayckinn_msg.quitApp("Ayckinn");

	else if(ayckinn_msg.username == ayckinn_fax.user_id)
		ayckinn_fax.removeAccount(ayckinn_msg.username);

	else
	{
		ayckinn_msg.printWarning("\tAccount doesn't exists !\n");
        removeUserAccount();
	}
	return;
}
/*---------------------------------------------------------------------------*/
void AyckinnMode::ayckinnChoice(const std::string& user_name)
{
	ayckinn_fc.blue("\n\tSelect an option : ");
	std::cin >> ayckinn_choice;
	
	switch(ayckinn_choice)
	{
		case '1':
			displayFile(user_name);
			ayckinnMenu(user_name);
			break;

		case '2':
			howManyUsers();
			ayckinnMenu(user_name);
			break;

		case '3':
			removeUserAccount();
			ayckinnInterface();
			break;

		case '4':
			ayckinn_fc.green("\n\tBye Ayckinn !");
			ayckinn_user.logOUT();
			ayckinn_guest.guestMenu();
			break;

		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '0':
			ayckinn_msg.printWarning("\tInvalid choice ! Please choose a number in the list..\n");
			ayckinnMenu(user_name);
			break;

		case 'c':
		case 'C':
			ayckinnInterface();
			ayckinn_fax.readChangelog();
			ayckinnMenu(user_name);
			break;

		case 'q':
		case 'Q':
			ayckinn_msg.quitApp("Ayckinn");
			break;

		default:
			ayckinn_msg.printWarning("\tThis is not a number ! Please choose a number in the list.\n");
			ayckinnMenu(user_name);
			break;
	}
	return;
}
///////////////////////////////////////////////////////////////////////////////