/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 01
      EXERCICE | 09
         TITLE | ACHATS DE LIVRES
 * ===================================================== */
#include <iostream>

int main()
{
    int current_money = 0;
    int price_book = 0;
    std::cin >> current_money >> price_book;

    int max_book = (current_money / price_book);
    std::cout << max_book << std::endl;

    return 0;
}