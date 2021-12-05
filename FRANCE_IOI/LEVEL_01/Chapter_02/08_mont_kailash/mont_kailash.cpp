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

#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    loop(108)
    {
        loop(13)
            haut();
        loop(13)
            droite();
        loop(13)
            bas();
        loop(13)
            gauche();
    }
    return 0;
}