/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 02
    EXERCICE  : 08 - MONT KAILASH
 * =================================================== */
#include <iostream>
#include "robot.h"

#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    LOOP(108)
    {
        LOOP(13)
            haut();
        LOOP(13)
            droite();
        LOOP(13)
            bas();
        LOOP(13)
            gauche();
    }
    return 0;
}