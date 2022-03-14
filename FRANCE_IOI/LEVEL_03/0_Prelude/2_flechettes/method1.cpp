/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | PRELUDE
      EXERCICE | 02
         TITLE | FLECHETTES (Method 1)
 * ===================================================== */
#include <iostream>
#include <algorithm>


char drawTarget(int line, int column, char size)
{
   line = std::min(line, (size - 1 - line));
   column = std::min(column, (size - 1 - column));

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
         std::cout << drawTarget(lin, col, size);

      std::cout << std::endl;
   }
   return 0;
}

/*
Avec cette methode, on utilise les fonctions (ou syntaxes) du langage qui permettent 
de convertir à la volée un entier en un caractère, et vice-versa.
*/