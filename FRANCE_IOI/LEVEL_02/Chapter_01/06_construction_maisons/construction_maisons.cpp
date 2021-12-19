/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 01
    EXERCICE  : 06
    TITLE     : CONSTRUCTION DE MAISONS
 * =================================================== */
#include <iostream>
#include <cmath>

int main()
{
    float cement_in_kg = 0;
    int weight_by_bag = 60;
    int price_by_bag = 45;

    std::cin >> cement_in_kg;

    float full_cement_price = (ceil(cement_in_kg / weight_by_bag) * price_by_bag);
    
    std::cout << full_cement_price << std::endl;
    return 0;
}

/**
 * NOTE :
 * La fonction [CEIL](CEILING = Plafond -> en haut) inclue dans la bibliothèque (CMATH)
 * permet d'afficher un nombre décimal à l'arrondi supérieur. 
 * A l'inverse, la fonction [FLOOR](Sol -> en bas) permet d'afficher un nombre décimal à l'arrondi inférieur
 * Et ce, quelque soit la valeur du nombre après la virgule.
 * 
 * Pour être au plus proche de l'arrondi en fonction de la valeur du nombre après la virgule,
 * il faut utiliser la fonction [ROUND](Arrondi).
 * Ainsi : 2,3 --> 2 et 3,8 --> 4
 * 
 * /!\ IL EST IMPORTANT DE BIEN MATRISER LES ARRONDIS, CELA PEUT CONSIDERABLEMENT CHANGER LE RESULTAT !!
 * 
 * Prenons l'exemple donné dans l'intitulé du cours :
 * 
 *  VERSION SANS ARRONDI
 *      (145,8 / 60) = 2,43
 *      (2,43 * 45)  = 109,35
 * Le coût total du ciment est de 109,35€
 * 
 *  VERSION AVEC ARRONDI 
 *      145,8 --> 146
 *      (146 / 60) = 2,43 --> 3
 *      (3 * 45)   = 135
 * Le coût total du ciment est de 135€
**/