/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 02
    EXERCICE  : 04 - LE SECRET DU GOMA
 * =================================================== */

#include <iostream>
#include "robot.h"

#define loop(turn) for(int i = 0; i < turn; ++i)

int main()
{
   loop(15)
   {
      droite();
      ramasser();
   }
   droite();
   deposer();

   return 0;
}