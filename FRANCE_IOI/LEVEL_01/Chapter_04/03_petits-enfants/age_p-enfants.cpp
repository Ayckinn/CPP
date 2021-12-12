/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 04
    EXERCICE  : 03
    TITLE     : AGE DES PETITS-ENFANTS
 * =================================================== */
#include <iostream>

int main()
{
   int ageCadet;
   int ageAine;
   std::cin >> ageCadet;
   std::cin >> ageAine;
   
   int difference = ageAine - ageCadet;
   std::cout << difference << std::endl;

   return 0;
}