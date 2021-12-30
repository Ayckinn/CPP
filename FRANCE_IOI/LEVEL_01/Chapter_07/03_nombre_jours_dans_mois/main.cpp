/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 07
    EXERCICE  : 03
    TITLE     : NOMBRE DE JOURS DANS LE MOIS
 * =================================================== */
#include <iostream>

int main()
{
   int choice = 0;
   std::cin >> choice;

   if(((choice > 3) && (choice < 7)) || (choice == 10))
      std::cout << 31 << std::endl;
   else if(choice == 11)
      std::cout << 29 << std::endl;
   else
      std::cout << 30 << std::endl;

   return 0;
}