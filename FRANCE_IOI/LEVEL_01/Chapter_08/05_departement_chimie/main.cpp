/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 08
      EXERCICE | 05
         TITLE | DEPARTEMENT DE CHIMIE : MELANGE EXPLOSIF
 * ===================================================== */
#include <iostream>

int main()
{
   int measures = 0;
   int temp_min = 0;
   int temp_max = 0;
   int intervals = 1;
   int temp = 0;

   std::cin >> measures >> temp_min >> temp_max >> temp;

   while(intervals <= measures && temp >= temp_min && temp <= temp_max)
   {
      std::cout << "Rien à signaler" << std::endl;

      if(intervals != measures)
         std::cin >> temp;
      
      intervals++;
   }
   if((temp < temp_min) || (temp > temp_max))
      std::cout << "Alerte !!" << std::endl;

   return 0;
}