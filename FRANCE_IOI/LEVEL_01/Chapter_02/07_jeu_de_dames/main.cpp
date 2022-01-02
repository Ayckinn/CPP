/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 02
    EXERCICE  : 07
    TITLE     : JEU DE DAMES
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    LOOP(20) 
    {
        LOOP(20)
            std::cout << "OX";
        std::cout << std::endl;
        
        LOOP(20)
            std::cout << "XO";
        std::cout << std::endl;
    }
    return 0;
}