/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 07
    EXERCICE  : 03 - NOMBRE DE JOURS DANS LE MOIS
 * =================================================== */
#include <iostream>

int main()
{
   int choix(0);
   std::cin >> choix;

   if(((choix > 3) && (choix < 7)) || (choix == 10))
      std::cout << 31 << std::endl;
   else if(choix == 11)
      std::cout << 29 << std::endl;
   else
      std::cout << 30 << std::endl;

   return 0;
}