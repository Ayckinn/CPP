/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 02
    EXERCICE  : 06 - PAGE D'ECRITURE
 * =================================================== */

#include <iostream>

#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    loop(30)
        std::cout << "a_";
    std::cout << std::endl;

    loop(30)
        std::cout << "b_";
    std::cout << std::endl;
    
    loop(30)
        std::cout << "c_";
    std::cout << std::endl;

   return 0;
}