/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 02
    EXERCICE  : 02 - MATHEMATIQUES DE BASE
 * =================================================== */

#include <iostream>
#include "robot.h"

#define loop(turn) for(int i = 0; i < turn; ++i)

int main()
{
    loop(2)
        gauche();
    std::cout << "Bonjour, laissez-moi vous aider";
    ramasser();

    loop(32)
        droite();
    deposer();

   return 0;
}