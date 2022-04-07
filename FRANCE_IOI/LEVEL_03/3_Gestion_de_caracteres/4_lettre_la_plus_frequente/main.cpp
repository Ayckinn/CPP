/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | 03
      EXERCICE | 04
         TITLE | LETTRE LA PLUS FREQUENTE
 * ===================================================== */
#include <iostream>
#include <string>
#include <cctype>

int main()
{
   std::ios::sync_with_stdio(false);  //-- Run the program faster

   std::string user_txt;
   getline(std::cin, user_txt);

   int alphabet[26] = {0};

   for(unsigned int i = 0; i < user_txt.size(); i++)
   {
      if(user_txt[i] != ' ')
      {
         int letter = (toupper(user_txt[i]) - 65);
         alphabet[letter]++;
      }
   }
   int letter = 0;
   
   for(int i = 0; i < 26; i++)
      if(alphabet[i] > alphabet[letter])
         letter = i;

   std::cout << (char)(65 + letter) << "\n";
   return 0;
}

/**
 *    In ASCII table, the 'A' starts at code 65
**/
