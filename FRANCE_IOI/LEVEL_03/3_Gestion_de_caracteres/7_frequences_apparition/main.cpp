/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | 03
      EXERCICE | 07
         TITLE | FREQUENCES D'APPARITION
 * ===================================================== */
#include <iostream>
#include <string>
#include <cctype>

int main()
{
   std::ios::sync_with_stdio(false);  //-- Run the program faster

   std::string text;
   getline(std::cin, text);

   int alphabet[26] = {0};
   int char_total_text = 0;

   for(unsigned int ch = 0; ch < text.size(); ch++)
   {
      char letter = text[ch];

      if(isalpha(letter))
      {
         int iletter = (toupper(letter) - 65);
         alphabet[iletter]++;
         char_total_text++;
      }
   }
   for(int ch = 0; ch < 26; ch++)
      std::cout << ((double)alphabet[ch] / char_total_text) << "\n";

   return 0;
}
