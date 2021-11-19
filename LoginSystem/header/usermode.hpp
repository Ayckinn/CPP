#ifndef USERMODE_HPP
#define USERMODE_HPP


class UserMode
{
	public:
		UserMode();
		~UserMode();

		void userInterface(const std::string& user_name);
		void userMenu(const std::string& user_name);
		void displayFile(const std::string& user_name);
		void userChoice(const std::string& user_name);


		void logOUT();

		char user_choice;


	private:
		//-- PASS

};
#endif  //-- USERMODE_HPP