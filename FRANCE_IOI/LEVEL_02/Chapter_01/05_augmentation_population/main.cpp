/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 01
    EXERCICE  : 05
    TITLE     : AUGMENTATION DE LA POPULATION
 * =================================================== */
#include <iostream>

int main()
{
	int current_pop = 0;
	int new_pop = 0;
	double pop_percent = 0;

	std::cin >> current_pop >> pop_percent;
	new_pop = ((current_pop * pop_percent / 100) + current_pop);

	std::cout << new_pop << std::endl;
	return 0;
}