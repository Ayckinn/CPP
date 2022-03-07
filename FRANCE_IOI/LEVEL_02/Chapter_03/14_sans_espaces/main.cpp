/* ==================== DESCRIPTION ==================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 03
    EXERCICE  : 14
    TITLE     : SANS ESPACES
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
    std::string text;
    getline(std::cin, text);

    for(unsigned int i = 0; i < text.length(); i++)
        if(text[i] == ' ')
            text[i] = '_';

    std::cout << text << std::endl;
    return 0;
}
