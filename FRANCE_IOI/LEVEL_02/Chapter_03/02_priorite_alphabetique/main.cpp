/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 03
      EXERCICE | 02
         TITLE | PRIORITE ALPHABETIQUE
 * ===================================================== */
#include <iostream>
#include <string>

/*-------------------------------------------------------*/
std::string upperString(std::string text)
{
    //-- To avoid warning of comparison between [int i] & [text.length()]
    //-- We have to put an [unsigned int] instead a simple [int]
    for(int unsigned i = 0; i < text.length(); i++)
        text[i] = std::toupper(text[i]);

    return text;
}
/*-------------------------------------------------------*/
int main()
{    
    std::string first_author;
    std::string second_author;

    getline(std::cin, first_author);
    getline(std::cin, second_author);

    
    if(first_author < second_author)
        std::cout << upperString(first_author) << std::endl;

    if(second_author < first_author)
        std::cout << upperString(second_author) << std::endl;

    return 0;
}
