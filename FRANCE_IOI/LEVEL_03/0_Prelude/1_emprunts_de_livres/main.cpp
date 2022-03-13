/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | PRELUDE
      EXERCICE | 01
         TITLE | EMPRUNTS DE LIVRES
 * ===================================================== */
#include <iostream>

const int MAX_BOOKS = 1000;
int next_free_date[MAX_BOOKS] = {0};

int main()
{
   int nb_books = 0, nb_days = 0;
   std::cin >> nb_books >> nb_days;

   for(int book = 0; book < nb_books; book++)
      next_free_date[book]--;

   for(int day = 0; day < nb_days; day++)
   {
      int nb_users = 0;
      std::cin >> nb_users;

      for(int user = 0; user < nb_users; user++)
      {
         int ID_books = 0, duration = 0;
         std::cin >> ID_books >> duration;

         if(day >= next_free_date[ID_books])
         {
            std::cout << "1\n";
            next_free_date[ID_books] = (day + duration);
         }
         else
            std::cout << "0\n";
      }
   }
   return 0;
}
