/* ==================== DESCRIPTION ==================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 04
    EXERCICE  : 03
    TITLE     : DENTELLE
 * ===================================================== */
#include <iostream>

void Dentelle(int nb_sign, char sign)
{
	for(int i = 0; i < nb_sign; i++)
		std::cout << sign;
	std::cout << std::endl;

	return;
}

int main()
{
	int len = 0;
	std::cin >> len;

	Dentelle(len, 'X');
	Dentelle(len, '#');
	Dentelle(len, 'i');

	return 0;
}