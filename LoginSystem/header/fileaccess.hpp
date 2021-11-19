#ifndef FILEACCESS_HPP
#define FILEACCESS_HPP


class FileAccess
{
	public:
		FileAccess();
		~FileAccess();

		void readChangelog();
		void createUserIDFile(const std::string& user_name, const std::string& user_pwd, const std::string& user_birth, const std::string& user_mail, const std::string& user_address);
		void readUserIDFile(const std::string& user_name);
		void displayMyFile(const std::string& user_name);
		void removeAccount(const std::string& user_name);
		void userFilesInFolder();

		std::string user_id;
		std::string user_pwd;
		std::string user_birth_date;
		std::string user_email;
		std::string user_addr;

		
	private:
		std::ofstream write_user_file;
		std::ifstream changelog_file;
		std::string changelog_line;
		std::string user_line;

		std::string root_id;
		std::string root_pwd;
		std::string user_path = "users/";
};
#endif  //-- FILEACCESS_HPP