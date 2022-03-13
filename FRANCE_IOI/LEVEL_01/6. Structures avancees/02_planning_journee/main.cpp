/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 06
      EXERCICE | 02
         TITLE | PLANNING DE LA JOURNEE
 * ===================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int current_pos = 0;
   int cities = 0;
   int cities_pos = 0;
   int total = 0;

   std::cin >> current_pos >> cities;

   LOOP(cities)
   {
      std::cin >> cities_pos;

      if(cities_pos >= (current_pos - 50) && cities_pos <= (current_pos + 50))
         total++;
   }
   std::cout << total << std::endl;
   return 0;
}