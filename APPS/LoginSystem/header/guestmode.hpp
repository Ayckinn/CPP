#ifndef GUESTMODE_HPP
#define GUESTMODE_HPP


class GuestMode
{
	public:
		GuestMode();
		~GuestMode();

		void guestInterface();		
		void guestChoice();
		void guestMenu();

		void signUP();
		void logIN();


	private:
		std::string root_password = "M@r10n";

};
#endif  //-- GUESTMODE_HPP