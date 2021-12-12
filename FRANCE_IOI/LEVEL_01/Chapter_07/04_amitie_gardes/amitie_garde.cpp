/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 07
    EXERCICE  : 04
    TITLE     : AMITIE ENTRE GARDES
 * =================================================== */
#include <iostream>

int main()
{
   int soldatADebut(0);
   int soldatAFin(0);
   int soldatBDebut(0);
   int soldatBFin(0);

   std::cin >> soldatADebut >> soldatAFin >> soldatBDebut >> soldatBFin;

   if((soldatAFin < soldatBDebut) || (soldatADebut > soldatBFin))
      std::cout << "Pas amis" << std::endl;
   else
      std::cout << "Amis" << std::endl;

   return 0;
}