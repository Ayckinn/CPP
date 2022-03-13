/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 03
      EXERCICE | 10
         TITLE | INSCRIPTION D'ETUDIANTS
 * ===================================================== */
#include <iostream>
#include <string>

int main()
{
    std::string student_name;
    std::cin >> student_name;
    char student_init = student_name[0];

    
    if(student_init < 'G')
        std::cout << 1 << std::endl;

    else if(student_init > 'P')
        std::cout << 3 << std::endl;

    else
        std::cout << 2 << std::endl;

    return 0;
}
