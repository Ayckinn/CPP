/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | PRELUDE
      EXERCICE | 03
         TITLE | FLECHETTES (Method 2)
 * ===================================================== */
#include <iostream>
#include <algorithm>


char alphabet[26] = 
   {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
//---------------------------------------------------------
char drawTarget(int line, int column, char size)
{
   line = std::min(line, (size - 1 - line));
   column = std::min(column, (size - 1 - column));

   return alphabet[std::min(line, column)];
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

/**
 * Avec cette methode, on utilise un tableau pour stocker les 26 lettres.
 * 
 * Variante possible pour le tableau : 
 * char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
 * **/