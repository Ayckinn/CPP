#ifndef MESSAGE_HPP
#define MESSAGE_HPP


class Message
{
	public:
		Message();
		~Message();

		void manageUsername(const std::string& username_text);
		void managePassword(const std::string& password_text);
		void manageDateOfBirth(const std::string& date_of_birth_text);
		void manageMail(const std::string& mail_text);
		void manageAddress(const std::string& address_text);

		void printBackToMenu();
		void printDone(const std::string& done_text);
		void printWarning(const std::string& warning_text);
		void printCategoryInfo(const std::string& category_info);
		void printAccessGranted(const std::string& user_name);
		void printAccessDenied();
		void printPressEnterKey();

		void quitApp(const std::string& user_name);

		std::string username;
		std::string password;
		std::string date_of_birth;
		std::string mail;
		std::string address;


	private:
		//-- PASS

};
#endif  //-- MESSAGE_HPP