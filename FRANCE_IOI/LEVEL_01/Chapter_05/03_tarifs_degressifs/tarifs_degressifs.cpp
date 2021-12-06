/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 05
    EXERCICE  : 03 - TARIFS DEGRESSIFS
 * =================================================== */
#include <iostream>

int main()
{
   int heure_arrivee(0);
   std::cin >> heure_arrivee;

   int prix = (10 + 5 * heure_arrivee); 

   if(prix > 53)
      std::cout << 53 << std::endl;
   else
      std::cout << prix << std::endl;

   return 0;
}