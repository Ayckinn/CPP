/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 01
    EXERCICE  : 11
    TITLE     : LA ROUE DE LA FORTUNE
 * =================================================== */
#include <iostream>

int main()
{
    int nb_cells = 0;
    int wheel_cells = 24;
    std::cin >> nb_cells;

    int selective_cell = (((nb_cells % wheel_cells) + wheel_cells) % wheel_cells);
    std::cout << selective_cell << std::endl;

    return 0;
}