/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | PRELUDE
      EXERCICE | 03
         TITLE | COMPOSITION MUSICALE (Method 1)
 * ===================================================== */
#include <iostream>
#include <cstring>  //-- For [strlen]

char track[501] = {0};
char result[501] = {0};

int main()
{
   int last_pos = -1;

   std::cin >> track;

   for(unsigned int pos = 0; pos < std::strlen(track); pos++)
   {
      if(last_pos >= 0 && result[last_pos] == track[pos])
         last_pos--;
      else
      {
         last_pos++;
         result[last_pos] = track[pos];
      }
   }
   for(int pos = 0; pos <= last_pos; pos++)
      std::cout << result[pos];

   return 0;
}

/*
Cette solution consiste à ne procéder qu'en un seul passage, 
en rajoutant les notes les unes après les autres. 
À chaque ajout, on a au plus un doublon qui peut se créer (tout à la fin), 
il suffit alors de le supprimer le cas échéant.
*/