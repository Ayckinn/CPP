/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | PRELUDE
      EXERCICE | 02
         TITLE | FLECHETTES
 * ===================================================== */
#include <iostream>
#include <algorithm>


char alphabet(int line, int column, char size)
{
   line = std::min(line, size - 1 - line);
   column = std::min(column, size - 1 - column);

   return ('a' + std::min(line, column));
}
//=========================================================
int main()
{
   int nb_letters = 0;
   std::cin >> nb_letters;

   int size = (2 * nb_letters - 1);

   for(int lin = 0; lin < size; lin++)
   {
      for(int col = 0; col < size; col++)
         std::cout << alphabet(lin, col, size);

      std::cout << std::endl;
   }
   return 0;
}
