/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | 03
      EXERCICE | 03
         TITLE | MAJUSCULES
 * ===================================================== */
#include <iostream>
#include <string>
#include <cctype>

int main()
{
	std::ios::sync_with_stdio(false);  //-- Run the program faster

	std::string user_txt;
	getline(std::cin, user_txt);

	for(unsigned int c = 0; c < user_txt.size(); c++)
		std::cout << (char)toupper(user_txt[c]);

	return 0;
}
