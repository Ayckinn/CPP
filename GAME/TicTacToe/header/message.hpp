#ifndef MESSAGE_HPP
#define MESSAGE_HPP


class Message
{
	public:
		Message();
		~Message();
		
		void printPlayerSign();
		void printWarning(const std::string& warning_text);
		void printPressEnterKey();
		void printUserChoice(const std::string& username_text);
		void quitApp();


	private:
		//-- PASS
};
#endif  //-- MESSAGE_HPP
