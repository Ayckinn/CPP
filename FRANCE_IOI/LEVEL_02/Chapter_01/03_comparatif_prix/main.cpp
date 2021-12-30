/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 01
    EXERCICE  : 03
    TITLE     : COMPARATIF DE PRIX
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    int vegetable = 0;
    std::cin >> vegetable;

    LOOP(vegetable)
    {
        double weight = 0;
        double age_in_days = 0;
        double price = 0;
        
        std::cin >> weight >> age_in_days >> price;
        std::cout << (price / weight) << std::endl;

        //-- DETAILED SOLUTION --//
        // weight = (weight / age_in_days);
        // price = (price / age_in_days / weight);
        // std::cout << price << std::endl;
    }
    return 0;
}