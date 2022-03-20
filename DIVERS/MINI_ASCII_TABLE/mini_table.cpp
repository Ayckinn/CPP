//---------------------------
//-- DISPLAY THE ASCII TABLE
//-- From 0 to 127
//---------------------------
#include <iostream>
#include <iomanip>  //-- For [setfill] & [setw] function

std::string green     = "\033[0;32m";
std::string magenta   = "\033[0;35m";
std::string end_color = "\033[0;m";

int main()
{
	std::system("clear");

	std::cout << "\t\t *********************** \n";
	std::cout << "\t\t **    ASCII TABLE    ** \n";
	std::cout << "\t\t *********************** \n\n";

	for(int line = 0; line < 16; line++)
	{
		for(int col = 0; col < 8; col++)
		{
			int code = (16 * col + line);
			char karak = (char)code;  //-- Convert the code by his character

			if(code < 32)
				karak = ' ';
			//-- /!\ The "32" ASCII code is a space character

			std::cout << magenta << std::setw(4) << code;
			std::cout << " " << green << karak << end_color << " ";
		}
		std::cout << "\n";
	}
	return 0;
}
