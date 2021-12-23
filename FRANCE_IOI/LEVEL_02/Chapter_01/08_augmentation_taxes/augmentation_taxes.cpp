/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 01
    EXERCICE  : 08
    TITLE     : AUGMENTATION DES TAXES
 * =================================================== */
#include <iostream>
#include <cmath>

int main()
{
    float current_taxe = 0;
    float new_taxe = 0;
    float current_vegetable_price = 0;
    float new_vegetable_price = 0;

    std::cin >> current_taxe >> new_taxe >> current_vegetable_price;

    new_vegetable_price = current_vegetable_price / (1 + current_taxe / 100) * (1 + new_taxe / 100);
    new_vegetable_price = round(new_vegetable_price * 100) / 100;

    std::cout << new_vegetable_price << std::endl;
    return 0;
}