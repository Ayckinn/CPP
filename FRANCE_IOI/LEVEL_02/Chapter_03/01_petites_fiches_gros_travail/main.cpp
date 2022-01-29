/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2022
    LANGUAGE  : C++
    LEVEL     : 02
    CHAPTER   : 03
    EXERCICE  : 01
    TITLE     : PETITES FICHES ET GROS TRAVAIL
 * =================================================== */
#include <iostream>
#include <string>

int main()
{
    for(int i = 0; i < 6; i++)
    {
        std::string author;
        std::string book_name;

        getline(std::cin, author);
        getline(std::cin, book_name);

        std::cout << book_name << std::endl << author << std::endl; 
    }
    std::cout << std::endl;
    return 0;
}
