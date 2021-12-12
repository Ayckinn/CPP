/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 05
    EXERCICE  : 02
    TITLE     : BORNES KILOMETRIQUES
 * =================================================== */
#include <iostream>

int main()
{
    int borneA(0);
    int borneB(0);

    std::cin >> borneA >> borneB;

    if(borneA < borneB)
        std::cout << borneB - borneA << std::endl;
    else
        std::cout << borneA - borneB << std::endl;

    return 0;
}