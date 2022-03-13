/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 04
      EXERCICE | 03
         TITLE | AGE DES PETITS-ENFANTS
 * ===================================================== */
#include <iostream>

int main()
{
   int junior_age;
   int senior_age;
   std::cin >> junior_age;
   std::cin >> senior_age;
   
   int difference = senior_age - junior_age;
   std::cout << difference << std::endl;

   return 0;
}