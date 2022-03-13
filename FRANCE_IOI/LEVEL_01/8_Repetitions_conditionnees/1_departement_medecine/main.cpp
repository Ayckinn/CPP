/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 08
      EXERCICE | 01
         TITLE | DEPARTEMENT DE MEDECINE : CONTROLE D'UNE EPIDEMIE
 * ===================================================== */
#include <iostream>

int main()
{
   int total_pop = 0;
   int sick_people = 1;
   int days = 1;

   std::cin >> total_pop;

   while(sick_people < total_pop)
   {
      days++;
      sick_people *= 3;
   }
   std::cout << days << std::endl;
   return 0;
}