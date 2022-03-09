/* ==================== DESCRIPTION ==================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 04
    EXERCICE  : 04
    TITLE     : MOTIF RECTANGULAIRE
 * ===================================================== */
#include <iostream>

void Display(int nb_line, int nb_sign, char sign)
{
	for(int i = 0; i < nb_line; i++)
	{
		for(int x = 0; x < nb_sign; x++)
			std::cout << sign;
			
		std::cout << std::endl;
	}
	return;
}

int main()
{
	int nbline = 0;
	int nbsign = 0;
	char signs;

	std::cin >> nbline >> nbsign >> signs;
	
	Display(nbline, nbsign, signs);

	return 0;
}