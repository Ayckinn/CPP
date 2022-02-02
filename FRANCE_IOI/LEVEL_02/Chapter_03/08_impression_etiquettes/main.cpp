/* ==================== DESCRIPTION ==================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 03
    EXERCICE  : 08
    TITLE     : IMPRESSION D'ETIQUETTES
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
    std::string title;
    getline(std::cin, title);

    for(int unsigned i = 0; i < title.length(); i++)
        std::cout << title[i] << std::endl;

    return 0;
}
