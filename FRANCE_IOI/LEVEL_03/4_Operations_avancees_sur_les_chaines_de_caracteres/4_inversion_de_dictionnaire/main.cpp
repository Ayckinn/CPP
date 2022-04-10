/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | 04
      EXERCICE | 04
         TITLE | INVERSION DE DICTIONNAIRE
 * ===================================================== */
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
   std::ios::sync_with_stdio(false);  //-- Run the program faster

   int nb_words = 0;
   std::cin >> nb_words;

   std::string dict[nb_words];
   for(int word = 0; word < nb_words; word++)
   {
      std::string original, translated;
      std::cin >> original >> translated;

      dict[word] = translated + " " + original;
   }
   //-- Sort the dictionnary by the translated word
   std::sort(dict, dict + nb_words);

   for(int word = 0; word < nb_words; word++)
      std::cout << dict[word] << "\n";

   return 0;
}
