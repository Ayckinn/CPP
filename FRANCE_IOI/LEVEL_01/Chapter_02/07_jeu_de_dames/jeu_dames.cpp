/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 02
    EXERCICE  : 07 - JEU DE DAMES
 * =================================================== */

#include <iostream>

#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    loop(20) 
    {
        loop(20)
            std::cout << "OX";
        std::cout << std::endl;
        
        loop(20)
            std::cout << "XO";
        std::cout << std::endl;
    }
    return 0;
}