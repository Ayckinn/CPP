/////////////////////////////// OBJECT CREATION ///////////////////////////////
GuestMode::GuestMode() {}
GuestMode::~GuestMode() {}

Logo 		guest_logo;
FontColor 	guest_fc;
Message 	guest_msg;
FileAccess 	guest_fax;
AyckinnMode guest_ayckinn;
UserMode 	guest_user;

DebugMode	guest_debug;

/////////////////////////////////// METHODS ///////////////////////////////////
void GuestMode::guestMenu()
{
	guestInterface();

	guest_fc.grey("\n\t[1]. ");
	guest_fc.magenta("SIGN UP\n");
	guest_fc.grey("\t[2]. ");
	guest_fc.magenta("LOGIN\n\n");

	guest_fc.grey("\t[c]. ");
	guest_fc.green("CHANGELOG\n");
	guest_fc.grey("\t[q]. ");
	guest_fc.green("QUIT\n");

	guestChoice();

	return;
}
/*---------------------------------------------------------------------------*/
void GuestMode::guestInterface()
{
	guest_logo.logoBeta();
	guest_logo.logoTitle();
	guest_fc.red("\n\t(Not connected) ");
	guest_fc.blue("User ID");
	guest_fc.white(" : ");
	guest_fc.magenta("Guest\n");
	
	return;
}
/*---------------------------------------------------------------------------*/
void GuestMode::signUP()
{
	guestInterface();
	guest_msg.printCategoryInfo("\t- SIGN UP : Create your account -");
	guest_msg.manageUsername("\n\tChoose your username : ");


	if(guest_msg.username == "0")
		guest_msg.printBackToMenu();

	else if(guest_msg.username == "q" || guest_msg.username == "Q")
		guest_msg.quitApp("Guest");

	//-- If user ID file doesn't exists
	else if(!std::filesystem::exists("users/" + guest_msg.username + ".id"))
	{
		guest_msg.managePassword("\tChoose your password : ");
		guest_msg.manageDateOfBirth("\tEnter your date of birth (JJ.MM.AAAA) : ");
		guest_msg.manageMail("\tEnter your Mail : ");
		guest_msg.manageAddress("\tEnter your address (Replace space by '_') : ");

		//-- If USERS folder doesn't exists, create it
		if(!std::filesystem::exists("users"))
		{
			std::filesystem::create_directory("users");
			guest_fax.createUserIDFile(guest_msg.username, guest_msg.password, guest_msg.date_of_birth, guest_msg.mail, guest_msg.address);
			signUP();
		}
		else
		{
			guest_fax.createUserIDFile(guest_msg.username, guest_msg.password, guest_msg.date_of_birth, guest_msg.mail, guest_msg.address);
			signUP();
		}
	}
	else
	{
		guest_msg.printWarning("\tThis account already exists.\n\tPlease choose another username.\n");
		signUP();
	}
	return;
}
/*---------------------------------------------------------------------------*/
void GuestMode::logIN()
{
	guestInterface();

	guest_msg.printCategoryInfo("\t- LOGIN : Log to your account -");
	guest_msg.manageUsername("\n\tEnter your Username : ");


	if(guest_msg.username == "0")
		guest_msg.printBackToMenu();

	else if(guest_msg.username == "q" || guest_msg.username == "Q")
		guest_msg.quitApp("Guest");

	else if(guest_msg.username == "Ayckinn")
	{
	ayckinn_pass:
		guest_msg.managePassword("\tEnter your root password : ");

		if (guest_msg.password == root_password)
		{
			guest_msg.printAccessGranted("Ayckinn");
			guest_ayckinn.ayckinnMenu(guest_msg.username);
		}
		else
		{
			guest_msg.printAccessDenied();
			goto ayckinn_pass;
		}
	}

	else
	{
		guest_msg.managePassword("\tEnter your password : ");
		guest_fax.readUserIDFile(guest_msg.username);

		//-- [USER_ID & USER_PWD] can be used if the user file is read before
		if(guest_msg.username == guest_fax.user_id && guest_msg.password == guest_fax.user_pwd)
		{
			guest_msg.printAccessGranted(guest_msg.username);
			guest_user.userMenu(guest_msg.username);
		}
		else
		{
			guest_msg.printAccessDenied();
			logIN();
		}
	}
	return;
}
/*---------------------------------------------------------------------------*/
void GuestMode::guestChoice()
{
	std::cout << std::endl;
	char guest_choice;
	
	guest_fc.blue("\tSelect an option : ");
	std::cin >> guest_choice;
	
	switch(guest_choice)
	{
		case '1':
			signUP();
			guestMenu();
			break;

		case '2':
			logIN();
			guestMenu();
			break;

		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9':
		case '0':
			guest_msg.printWarning("\tInvalid choice ! Please choose a number in the list..\n");
			guestMenu();
			break;

		case 'c':
		case 'C':
			guestInterface();
			guest_fax.readChangelog();
			guestMenu();
			break;

		case 'q':
		case 'Q':
			guest_msg.quitApp("Guest");
			break;

		default:
			guest_msg.printWarning("\tThis is not a number ! Please choose a number in the list.\n");
			guestMenu();
			break;
	}
	return;
}
///////////////////////////////////////////////////////////////////////////////