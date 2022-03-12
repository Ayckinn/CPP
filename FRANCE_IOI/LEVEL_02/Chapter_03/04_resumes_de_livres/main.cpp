/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 03
      EXERCICE | 04
         TITLE | RESUMES DE LIVRES
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
    int nb_books = 0;
    int summary_min_length = 0;

    std::cin >> nb_books;
    std::cin >> summary_min_length;
    std::cin.ignore();
    
    for(int i = 0; i < nb_books; i++)
    {
        std::string title;
        std::string summary;

        getline(std::cin, title);
        getline(std::cin, summary);
        
        //-- See Note 48 in [COURS] folder to explain the reason
        if((int)(summary.length()) < summary_min_length)
            std::cout << title << std::endl;
    }
    return 0;
}
