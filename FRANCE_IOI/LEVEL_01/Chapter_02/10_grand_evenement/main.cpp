/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 02
      EXERCICE | 10
         TITLE | LE GRAND EVENEMENT
 * ===================================================== */
#include <iostream>
#include "robot.h"

#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    LOOP(9)
        haut();
    LOOP(9)
        droite();
    LOOP(9)
        bas();
    LOOP(4)
    {
        gauche();
        LOOP(8)
            haut();

        gauche();
        LOOP(8)
            bas();
    }
    gauche();
    return 0;
}