/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 03
      EXERCICE | 04
         TITLE | L'ALGOREATHLON
 * ===================================================== */
#include <iostream>

int main()
{
   int swimming = 2;
   int biking = 34;
   int running = 6;
   int distance_day_one = swimming + biking + running;
   int distance_day_two = distance_day_one * 2;
   int distance_day_three = distance_day_one * 3;

   std::cout << distance_day_one << " " << distance_day_two << " " << distance_day_three << std::endl;
   return 0;
}