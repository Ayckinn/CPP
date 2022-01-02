/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 02
    EXERCICE  : 01
    TITLE     : PREPARATION DE L'ONGUENT
 * =================================================== */
#include <iostream>

int main()
{
    int component = 0;
    int quantity[10] = {500, 180, 650, 25, 666, 42, 421, 1, 370, 211};
    
    std::cin >> component;
    std::cout << quantity[component] << std::endl;
    
    return 0;
}