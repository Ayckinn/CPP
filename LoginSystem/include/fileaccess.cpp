/////////////////////////////// OBJECT CREATION ///////////////////////////////
FileAccess::FileAccess() {}
FileAccess::~FileAccess() {}

FontColor 	fax_fc;
Message 	fax_msg;
AyckinnMode fax_ayckinn;
GuestMode 	fax_guest;
DebugMode 	fax_debug;

/////////////////////////////////// METHODS ///////////////////////////////////
void FileAccess::readChangelog()
{
	fax_fc.magenta("\n\t- CHANGELOG : What's new -\n");

	changelog_file.open("Changelog.txt");
	fax_fc.yellow("\n\t/////////////////// CHANGELOG FOR LINUX ///////////////////\n");

	while(getline(changelog_file, changelog_line))
	{
		std::cout << "\t";
		fax_fc.grey(changelog_line);
		std::cout << std::endl;
	}
	changelog_file.close();
	fax_fc.yellow("\n\t///////////////////////////////////////////////////////////");

	fax_msg.printPressEnterKey();

	return;
}
/*---------------------------------------------------------------------------*/
void FileAccess::createUserIDFile(const std::string& user_name, const std::string& user_pwd, const std::string& user_birth, const std::string& user_mail, const std::string& user_address)
{
	//-- Open empty file
	write_user_file.open("users/" + user_name + ".id");
	//-- Write user logs, save & close the file
	write_user_file << user_name << std::endl;
	write_user_file << user_pwd << std::endl;
	write_user_file << user_birth << std::endl;
	write_user_file << user_mail << std::endl;
	write_user_file << user_address << std::endl;
	write_user_file.close();

	fax_fc.green("\n\tWelcome " );
	fax_fc.magenta(user_name);
	fax_fc.green(" !\n\n\tYour account has been created succesfully !");
	fax_fc.green("\n\tNow, you can connect...\n\n");
	sleep(4);

	return;
}
/*---------------------------------------------------------------------------*/
void FileAccess::readUserIDFile(const std::string& user_name)
{
	//-- Read the user file created after registration
	std::ifstream read_user_file("users/" + user_name + ".id");

	getline(read_user_file, user_id);
	getline(read_user_file, user_pwd);

	return;
}
/*---------------------------------------------------------------------------*/
void FileAccess::displayMyFile(const std::string& user_name)
{
	std::ifstream user_file_to_read("users/" + user_name + ".id");
	getline(user_file_to_read, user_id);
	getline(user_file_to_read, user_pwd);
	getline(user_file_to_read, user_birth_date);
	getline(user_file_to_read, user_email);
	getline(user_file_to_read, user_addr);

	std::ifstream read_user_file;
	read_user_file.open("users/" + user_name + ".id");

	fax_fc.yellow("\n\t///////////////////////////////////// MY INFOS ////////////////////////////////////\n");

    fax_fc.grey("\n\t\t     Username : ");
    fax_fc.blue(user_id);
    fax_fc.grey("\n\t\t     Password : ");
    fax_fc.blue(user_pwd);
    fax_fc.grey("\n\t\tDate of Birth : ");
    fax_fc.blue(user_birth_date);
    fax_fc.grey("\n\t\t         Mail : ");
    fax_fc.blue(user_email);
    fax_fc.grey("\n\t\t      Address : ");
    fax_fc.blue(user_addr);
    std::cout << std::endl;

    //-- For displaying file without form, line by line
    //-- While the file is open, user_ID_file and display all lines inside
    //-- When there are no more lines to user_ID_file, close the file
    // while(getline(read_user_file, user_line))
    // {
    //     fax_fc.grey("\t\t\t" + user_line);
    //     std::cout << std::endl;
    // }
    
    read_user_file.close();
    fax_fc.yellow("\n\t///////////////////////////////////////////////////////////////////////////////////");

    fax_msg.printPressEnterKey();

	return;
}
/*---------------------------------------------------------------------------*/
void FileAccess::userFilesInFolder()
{
	fax_fc.yellow("\n\t-----------------------------------");
	for(const auto &entry : std::filesystem::directory_iterator(user_path))
	{
		fax_fc.grey("\n\t\t[*] ");
		fax_fc.blue(entry.path().c_str());
	}
	//-- If I want to delete the (users) folder
	//std::filesystem::remove_all(user_path);

	fax_fc.yellow("\n\t-----------------------------------");

	fax_msg.printPressEnterKey();

	return;
}
/*---------------------------------------------------------------------------*/
void FileAccess::removeAccount(const std::string& user_name)
{
	fax_msg.managePassword("\tEnter Admin password : ");

	std::ifstream root_ID_file("users/Ayckinn.id");
	getline(root_ID_file, root_id);
	getline(root_ID_file, root_pwd);


	if(fax_msg.password == root_pwd)
	{
		if(!("users/" + user_name + ".id").c_str())
			fax_msg.printWarning("\tAccount already deleted.\n");
		else
		{
			remove(("users/" + user_name + ".id").c_str());
			fax_msg.printDone("\tAccount deleted successfully !\n");
			fax_ayckinn.removeUserAccount();
		}
	}

	else
	{
		fax_msg.printWarning("\tWrong password !\n\n");
		fax_ayckinn.removeUserAccount();
	}
	return;
}
///////////////////////////////////////////////////////////////////////////////