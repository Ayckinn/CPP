/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 02
    EXERCICE  : 09
    TITLE     : VENDANGES
 * =================================================== */
#include <iostream>
#include "robot.h"

#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    LOOP(20)
    {
        ramasser();
        LOOP(15)
            droite();

        deposer();
        LOOP(15)
            gauche();
    }
    return 0;
}