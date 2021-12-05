/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 04
    EXERCICE  : 05 - GRADUATION DE THERMOMETRES
 * =================================================== */
#include <iostream>
#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
	int temp_min(0);
	int temp_max(0);
	int interval(0);

	std::cin >> temp_min;
	std::cin >> temp_max;
	interval = (temp_max - temp_min);

	loop(interval) 
	{ 
		std::cout << temp_min << std::endl;
		temp_min++; 
	}
	std::cout << temp_max << std::endl;
	return 0;
}