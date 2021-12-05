/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 03
    EXERCICE  : 11 - COURSE AVEC LES ENFANTS
 * =================================================== */
#include <iostream>
#include "robot.h"

#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    int move(0);

    loop(10)
    {  
        move++;
        loop(move)
            droite();
        ramasser();

        loop(move)
            gauche();
        deposer();
    }
    return 0;
}