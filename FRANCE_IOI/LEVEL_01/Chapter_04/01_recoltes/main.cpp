/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 04
    EXERCICE  : 01
    TITLE     : RECOLTES
 * =================================================== */
#include <iostream>

int main()
{
    int side_length = 0;
    const int WEIGHT = 23;

    std::cin >> side_length;
    std::cout << (WEIGHT * (side_length * side_length)) << std::endl;

    return 0;
}