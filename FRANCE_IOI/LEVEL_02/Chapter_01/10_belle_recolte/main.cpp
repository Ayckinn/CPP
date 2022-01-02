/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 01
    EXERCICE  : 10
    TITLE     : UNE BELLE RECOLTE
 * =================================================== */
#include <iostream>

int main()
{
    int nb_people = 0;
    int nb_fruits = 0;
    std::cin >> nb_people >> nb_fruits;
    
    int multiple = (nb_fruits % nb_people);

    if(multiple == 0)
        std::cout << "oui\n";
    else
        std::cout << "non\n";

    return 0;
}