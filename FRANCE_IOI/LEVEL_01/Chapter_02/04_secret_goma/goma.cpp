/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 02
    EXERCICE  : 04
    TITLE     : LE SECRET DU GOMA
 * =================================================== */
#include <iostream>
#include "robot.h"

#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   LOOP(15)
   {
      droite();
      ramasser();
   }
   droite();
   deposer();

   return 0;
}