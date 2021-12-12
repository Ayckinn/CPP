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
    int longueur_cote(0);
    int masse(23);

    std::cin >> longueur_cote;
    std::cout << (masse * (longueur_cote * longueur_cote)) << std::endl;

    return 0;
}