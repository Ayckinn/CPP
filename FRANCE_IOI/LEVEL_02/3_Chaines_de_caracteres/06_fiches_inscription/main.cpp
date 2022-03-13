/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 03
      EXERCICE | 06
         TITLE | FICHES D'INSCRIPTION
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
    int nb_people = 0;
    std::cin >> nb_people;

    for(int i = 0; i < nb_people; i++)
    {
        std::string first_name;
        std::string last_name;
        
        std::cin >> first_name;
        std::cin >> last_name;

        std::cout << last_name << " " << first_name << std::endl;
    }
    return 0;
}
