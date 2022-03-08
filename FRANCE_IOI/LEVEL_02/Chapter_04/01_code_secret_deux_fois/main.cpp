/* ==================== DESCRIPTION ==================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 04
    EXERCICE  : 01
    TITLE     : CODE SECRET DEUX FOIS
 * ===================================================== */
#include <iostream>

void enterPass()
{
    int user_pass = 0;

    while(user_pass != 4242)
    {
        std::cout << "Entrez le code : " << std::endl;
        std::cin >> user_pass;
    }    
    return;
}

int main()
{
    enterPass();
    std::cout << "Encore une fois." << std::endl;
    
    enterPass();
    std::cout << "Bravo." << std::endl;

    return 0;
}
