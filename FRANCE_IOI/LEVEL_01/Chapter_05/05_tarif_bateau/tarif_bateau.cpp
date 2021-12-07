/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 05
    EXERCICE  : 05 - TARIF DU BATEAU
 * =================================================== */
#include <iostream>

int main()
{
    int age(0);
    std::cin >> age;

    if(age < 21)
        std::cout << "Tarif réduit" << std::endl;
    else
        std::cout << "Tarif plein" << std::endl;

    return 0;
}