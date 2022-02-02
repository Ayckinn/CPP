/* ==================== DESCRIPTION ==================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 03
    EXERCICE  : 09
    TITLE     : ECRITURE EN MIROIR
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
    int nb_lines = 0;
    std::cin >> nb_lines;
    std::cin.ignore();

    for(int line = 0; line < nb_lines; line++)
    {
        std::string text;
        getline(std::cin, text);
        
        //-- Display letters from text from the end to the beginning
        for(int letter = text.length() - 1; letter >= 0; letter--)
            std::cout << text[letter];
        
        std::cout << std::endl;
    }
    return 0;
}
