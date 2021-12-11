/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 01
    EXERCICE  : 04
    TITLE     : DANS LE FOURRE
 * =================================================== */
#include <iostream>
#include <robot.h>

#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   LOOP(3)
      haut();
   LOOP(2)
      droite();
   LOOP(2)
      bas();
   droite();

   return 0;
}