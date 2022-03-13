/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 07
      EXERCICE | 04
         TITLE | AMITIE ENTRE GARDES
 * ===================================================== */
#include <iostream>

int main()
{
   int start_soldierA = 0;
   int end_soldierA = 0;
   int start_soldierB = 0;
   int end_soldierB = 0;

   std::cin >> start_soldierA >> end_soldierA >> start_soldierB >> end_soldierB;

   if((end_soldierA < start_soldierB) || (start_soldierA > end_soldierB))
      std::cout << "Pas amis" << std::endl;
   else
      std::cout << "Amis" << std::endl;

   return 0;
}