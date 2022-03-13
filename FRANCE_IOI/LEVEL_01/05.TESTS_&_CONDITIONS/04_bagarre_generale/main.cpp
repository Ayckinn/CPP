/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 05
      EXERCICE | 04
         TITLE | BAGARRE GENERALE
 * ===================================================== */
#include <iostream>

int main()
{
   int arignon_area = 0;
   int evaran_area = 0;

   std::cin >> arignon_area >> evaran_area;

   if(arignon_area - evaran_area > 10)
      std::cout << "La famille Arignon a un champ trop grand" << std::endl;
   else if(evaran_area - arignon_area > 10)
      std::cout << "La famille Evaran a un champ trop grand" << std::endl;

   return 0;
}