/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 03
    EXERCICE  : 11
    TITLE     : COURSE AVEC LES ENFANTS
 * =================================================== */
#include <iostream>
#include "robot.h"

#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    int move = 0;

    LOOP(10)
    {  
        move++;
        LOOP(move)
            droite();
        ramasser();

        LOOP(move)
            gauche();
        deposer();
    }
    return 0;
}