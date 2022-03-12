/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 03
      EXERCICE | 13
         TITLE | ANALYSE D'UNE LANGUE
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
    char letter;
    std::cin >> letter;

    int nb_lines = 0;
    std::cin >> nb_lines;
    std::cin.ignore();

    std::string text;
    int nb_appears = 0;

    for(int line = 0; line < nb_lines; line++)
    {
        getline(std::cin, text);

        for(unsigned int i = 0; i < text.length(); i++)
            if(text[i] == letter)
                nb_appears++;
    }
    std::cout << nb_appears << std::endl;
    return 0;
}
