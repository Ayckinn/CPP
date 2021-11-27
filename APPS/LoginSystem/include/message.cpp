/////////////////////////////// OBJECT CREATION ///////////////////////////////
Message::Message() {}
Message::~Message() {}

FontColor msg_fc;

/////////////////////////////////// METHODS ///////////////////////////////////
/*---------------------------------------------------------------------------*/
void Message::manageUsername(const std::string& username_text)
{
    msg_fc.blue(username_text);
    std::cin >> username;

    return;
}
/*---------------------------------------------------------------------------*/
void Message::managePassword(const std::string& password_text)
{
    msg_fc.blue(password_text);
    std::cin >> password;

    return;
}
/*---------------------------------------------------------------------------*/
void Message::manageDateOfBirth(const std::string& date_of_birth_text)
{
    msg_fc.blue(date_of_birth_text);
    std::cin >> date_of_birth;

    return;
}
/*---------------------------------------------------------------------------*/
void Message::manageMail(const std::string& mail_text)
{
    msg_fc.blue(mail_text);
    std::cin >> mail;

    return;
}
/*---------------------------------------------------------------------------*/
void Message::manageAddress(const std::string& address_text)
{
    msg_fc.blue(address_text);
    std::cin >> address;

    return;
}
/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
void Message::printBackToMenu()
{
    //!!-- DON'T FORGET THE [\n] at the end, otherwise, this line will don't work well
    msg_fc.yellow("\n\t- Back to the Menu - \n");
    sleep(2);

    return; 
}
/*---------------------------------------------------------------------------*/
void Message::printDone(const std::string& done_text)
{
    std::cout << std::endl;
    msg_fc.green(done_text);
    sleep(3);

    return;
}
/*---------------------------------------------------------------------------*/
void Message::printWarning(const std::string& warning_text)
{
    std::cout << std::endl;
    msg_fc.red(warning_text);
    sleep(3);

    return;
}
/*---------------------------------------------------------------------------*/
void Message::printCategoryInfo(const std::string& category_info)
{
    msg_fc.magenta("\n" + category_info + "\n");
    msg_fc.grey("\n\t[0]. Go back to the menu");
    msg_fc.grey("\n\t[q]. Quit the program\n");

    return;
}
/*---------------------------------------------------------------------------*/
void Message::printAccessGranted(const std::string& user_name)
{
    msg_fc.green("\n\tACCESS GRANTED !\n");
    msg_fc.green("\tHello ");
    msg_fc.magenta(user_name);
    msg_fc.white(" ^^\n");
    sleep(3);

    return;
}
/*---------------------------------------------------------------------------*/
void Message::printAccessDenied()
{
    msg_fc.red("\n\tACCESS DENIED !\n");
    msg_fc.red("\tUsername or password unknown. Please retry...\n");
    sleep(3);

    return;
}
/*---------------------------------------------------------------------------*/
void Message::printPressEnterKey()
{
    msg_fc.white("\n\n\tPress ENTER to close the file...\n");
    std::cin.ignore();
    std::cin.get();

    return;
}
/*---------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------*/
void Message::quitApp(const std::string& user_name)
{
    msg_fc.green("\n\tSystem exit... See you soon ");
    msg_fc.magenta(user_name);
    msg_fc.white(" ^^\n");
    sleep(2);

    std::system("clear");
    std::exit(0);

    return;
}
///////////////////////////////////////////////////////////////////////////////