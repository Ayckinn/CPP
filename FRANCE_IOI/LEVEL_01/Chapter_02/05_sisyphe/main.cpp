/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 02
      EXERCICE | 05
         TITLE | SISYPHE
 * ===================================================== */
#include <iostream>
#include "robot.h"

#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   LOOP(21)
   {
      haut();
      droite();
   }
   LOOP(21)
   {
      gauche();
      bas();
   }
   return 0;
}