/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 03
      EXERCICE | 02
         TITLE | L'ECLIPSE
 * ===================================================== */
#include <iostream>

int main()
{
   int current_date = 11937;
   int day_of_eclipse = 12581;
   int remaining_days = (day_of_eclipse - current_date);

   std::cout << remaining_days << std::endl;
   return 0;
}