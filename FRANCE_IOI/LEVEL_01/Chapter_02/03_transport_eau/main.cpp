/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 02
    EXERCICE  : 03
    TITLE     : TRANSPORT D'EAU
 * =================================================== */
#include <iostream>
#include "robot.h"

#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    LOOP(2)
        gauche();
        
    std::cout << "Bonjour, laissez-moi vous aider";
    ramasser();

    LOOP(32)
        droite();
    deposer();

   return 0;
}