/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 04
    EXERCICE  : 10
    TITLE     : LE PLUS BEAU KARVA
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    int nb_karva(0);
    int poids(0);
    int age(0);
    int cornes(0);
    int garrot(0);

    std::cin >> nb_karva;

    LOOP(nb_karva)
    {
        std::cin >> poids >> age >> cornes >> garrot;
        std::cout << (cornes * garrot + poids) << std::endl;
    }
    return 0;
}