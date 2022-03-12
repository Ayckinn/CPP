/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 08
      EXERCICE | 04
         TITLE | DEPARTEMENT D'ARCHITECTURE : CONSTRUCTION D'UNE PYRAMIDE
 * ===================================================== */
#include <iostream>

int main()
{
   int max_stones = 0;
   int levels = 0;
   int stones_by_levels = 0;

   std::cin >> max_stones;

   while((stones_by_levels + ((levels + 1)*(levels + 1))) <= max_stones)
   {
      levels++;
      stones_by_levels += (levels * levels);
   }
   std::cout << levels << std::endl << stones_by_levels << std::endl;
   return 0;
}
