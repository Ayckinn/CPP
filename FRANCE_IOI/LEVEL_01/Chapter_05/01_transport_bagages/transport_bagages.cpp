/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 05
    EXERCICE  : 01 - TRANSPORT DES BAGAGES
 * =================================================== */
#include <iostream>

int main()
{
    int nb_paquet(0);
    int poids(0);
    int resultat(0);

    std::cin >> nb_paquet >> poids;
    resultat = (nb_paquet * poids);

    if(resultat > 105)
        std::cout << "Surcharge !" << std::endl;

    return 0;
}