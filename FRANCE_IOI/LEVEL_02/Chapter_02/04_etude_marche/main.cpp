/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 02
      EXERCICE | 04
         TITLE | ETUDE DE MARCHE
 * ===================================================== */
#include <iostream>

int main()
{
    int nb_products = 0;
    int nb_people = 0;
    std::cin >> nb_products >> nb_people;

    //-- Add 'nb_products' items in the empty list 
    int products_list[nb_products];
    for(int i = 0; i < nb_products; i++)
        products_list[i] = 0;

    for(int i = 0; i < nb_people; i++)
    {
        int products = 0;
        std::cin >> products;
        products_list[products] += 1;
    }

    //-- Display items in the list from 0 to nb_products
    for(int i = 0; i < nb_products; i++)
        std::cout << products_list[i] << std::endl;

    return 0;
}