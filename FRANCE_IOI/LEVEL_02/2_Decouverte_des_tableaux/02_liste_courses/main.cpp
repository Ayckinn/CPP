/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 02
      EXERCICE | 02
         TITLE | LISTE DE COURSES
 * ===================================================== */
#include <iostream>

int main()
{
    int products_price_kg[10] = {9, 5, 12, 15, 7, 42, 13, 10, 1, 20};
    int total = 0;

    for(int i = 0; i < 10; i++)
    {
        int products = 0;
        std::cin >> products;

        products *= products_price_kg[i];
        total += products;
    }
    std::cout << total << std::endl;
    return 0;
}