#ifndef AYCKINNMODE_HPP
#define AYCKINNMODE_HPP


class AyckinnMode
{
	public:
		AyckinnMode();
		~AyckinnMode();

		void ayckinnInterface();
		void ayckinnMenu(const std::string& user_name);
		void ayckinnChoice(const std::string& user_name);

		void displayFile(const std::string& user_name);
		void howManyUsers();
		void removeUserAccount();
		void logOUT();

		char ayckinn_choice;


	private:
		//-- PASS

};
#endif  //-- AYCKINNMODE_HPP