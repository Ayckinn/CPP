/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | 04
      EXERCICE | 02
         TITLE | TRIER DES LIVRES
 * ===================================================== */
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
   std::ios::sync_with_stdio(false);  //-- Run the program faster

   int nb_books = 0;
   std::cin >> nb_books;
   std::cin.ignore();

   std::string title[nb_books];
   for(int book = 0; book < nb_books; book++)
      getline(std::cin, title[book]);

   std::sort(title, title + nb_books);

   for(int book = 0; book < nb_books; book++)
      std::cout << title[book] << "\n";

   return 0;
}
