/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 06
      EXERCICE | 01
         TITLE | VILLES ET VILLAGES
 * ===================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int city = 0;
   int people = 0;
   int total = 0;
   const int MAX_PEOPLE = 10000;

   std::cin >> city;

   LOOP(city)
   {
      std::cin >> people;
      
      if(people > MAX_PEOPLE)
         total++;
   }
   std::cout << total << std::endl;
   return 0;
}