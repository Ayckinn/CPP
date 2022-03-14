/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | PRELUDE
      EXERCICE | 03
         TITLE | COMPOSITION MUSICALE (Method 2)
 * ===================================================== */
#include <iostream>
#include <cstring>

char track[501] = {0};

int main()
{
   std::cin >> track;

   int nb_notes = (int)strlen(track);
   int duplicates = -1;

   while(duplicates != 0)
   { 
      int note = 0, result = 0;
      duplicates = 0;

      while(note < nb_notes)
      {
         if(note < (nb_notes - 1) && track[note] == track[note + 1])
         {
            note += 2;
            duplicates++;
         }
         else
         {
            track[result] = track[note];
            note++;
            result++;
         }
      }
      nb_notes = (nb_notes - 2 * duplicates);
   }
   for(int pos = 0; pos < nb_notes; pos++)
      std::cout << track[pos];

   return 0;
}

// Cette methode consiste à faire plusieurs passages, et supprimer des doublons tant qu'il y en a. 
