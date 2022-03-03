/* ==================== DESCRIPTION ==================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 03
    EXERCICE  : 11
    TITLE     : NGMS SNS VLLS
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
    std::string name;

    for(int title_author = 0; title_author < 2; title_author++)
    {
        getline(std::cin, name);

        for(int unsigned i = 0; i < name.length(); i++)
        {
            if(name[i] != 'A' && name[i] != 'E' && name[i] != 'I' && name[i] != 'O' && \
                name[i] != 'U' && name[i] != 'Y' && name[i] != ' ')
                
                std::cout << name[i];
        }
        std::cout << std::endl;
    }
    return 0;
}