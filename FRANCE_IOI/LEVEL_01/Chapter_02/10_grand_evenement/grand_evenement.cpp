/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 02
    EXERCICE  : 10 - LE GRAND EVENEMENT
 * =================================================== */
#include <iostream>
#include "robot.h"

#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    loop(9)
        haut();
    loop(9)
        droite();
    loop(9)
        bas();

    loop(4)
    {
        gauche();
        loop(8)
            haut();

        gauche();
        loop(8)
            bas();
    }
    gauche();
    return 0;
}