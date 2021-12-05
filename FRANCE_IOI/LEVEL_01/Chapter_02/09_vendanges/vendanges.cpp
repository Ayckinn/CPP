/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 02
    EXERCICE  : 09 - VENDANGES
 * =================================================== */
#include <iostream>
#include "robot.h"

#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    loop(20)
    {
        ramasser();
        loop(15)
            droite();

        deposer();
        loop(15)
            gauche();
    }
    return 0;
}