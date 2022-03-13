/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 03
      EXERCICE | 05
         TITLE | LIRE OU NE PAS LIRE, TELLE EST LA QUESTION
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
    int nb_books = 0;
    std::cin >> nb_books;
    std::cin.ignore();

    int read_title_length = 0;
    for(int i = 0; i < nb_books; i++)
    {
        std::string unread_title;
        getline(std::cin, unread_title);

        if((int)(unread_title.length()) > read_title_length)
        {
            std::cout << unread_title << std::endl;
            read_title_length = unread_title.length();
        }
    }
    return 0;
}
