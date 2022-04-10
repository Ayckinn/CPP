/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | 04
      EXERCICE | 03
         TITLE | LIRE OU NE PAS LIRE,
                 TELLE EST (A NOUVEAU) LA QUESTION
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
   std::ios::sync_with_stdio(false);  //-- Run the program faster

   int nb_books = 0;
   std::cin >> nb_books;
   std::cin.ignore();

   std::string title;
   std::string last_entry;
   
   for(int book = 0; book < nb_books; book++)
   {
      getline(std::cin, title);

      if(title > last_entry)
      {
         last_entry = title;
         std::cout << title << "\n";
      }
   }
   return 0;
}
