/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 01
    EXERCICE  : 04 - DANS LE FOURRE
 * =================================================== */

#include <iostream>
#include <robot.h>

#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   loop(3)
      haut();
   loop(2)
      droite();
   loop(2)
      bas();
   droite();

   return 0;
}