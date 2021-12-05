/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 02
    EXERCICE  : 05 - SISYPHE
 * =================================================== */

#include <iostream>
#include "robot.h"

#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   loop(21)
   {
      haut();
      droite();
   }
   loop(21)
   {
      gauche();
      bas();
   }
   return 0;
}