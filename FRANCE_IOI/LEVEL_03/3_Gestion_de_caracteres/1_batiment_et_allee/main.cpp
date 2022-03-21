/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | 03
      EXERCICE | 01
         TITLE | BATIMENT ET ALLEE
 * ===================================================== */
#include <iostream>

int main()
{
   std::ios::sync_with_stdio(false);  //-- Run the program faster

   char author_name[50];
   int son_age = 0;
   std::cin >> author_name >> son_age;

   std::cout << ((int)author_name[0] - 64) << (char)(son_age + 64) << "\n";

   return 0;
}

/**
 *    In ASCII table, the 'A' starts at code 65
 *    but we want the 'A' starts at 1
 *    65 - 1 = 64
 *    Substract '64' from the index to redefine the character code
 *    Add '64' to get the right code on the ASCII table
**/