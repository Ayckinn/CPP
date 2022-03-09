/* ==================== DESCRIPTION ==================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 04
    EXERCICE  : 02
    TITLE     : DEUX CODES SECRETS
 * ===================================================== */
#include <iostream>

void enterPassword(int pass)
{
	int user_pass = 0;

	while(user_pass != pass)
	{
		std::cout << "Entrez le code : " << std::endl;
		std::cin >> user_pass;
	}
	return;
}

int main()
{
	enterPassword(4242);
	std::cout << "Premier code bon.\n";

	enterPassword(2121);
	std::cout << "Bravo.\n";

	return 0;
}