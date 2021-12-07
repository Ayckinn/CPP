/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 05
    EXERCICE  : 08 - MOT DE PASSE DU VILLAGE
 * =================================================== */
#include <iostream>

int main()
{
   int password(64741);
   int user_choice(0);

   std::cin >> user_choice;

   if(user_choice == password)
      std::cout << "Bon festin !" << std::endl;
   else
      std::cout << "Allez-vous en !" << std::endl;

   return 0;
}