/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 08
      EXERCICE | 03
         TITLE | DEPARTEMENT DE PEDAGOGIE : LE «C'EST PLUS, C'EST MOINS»
 * ===================================================== */
#include <iostream>

int main()
{
   int nb_to_guess = 0;
   int choice = 0;
   int tries = 0;

   std::cin >> nb_to_guess;

   while(choice != nb_to_guess)
   {
      std::cin >> choice;
      tries++;


      if(choice == nb_to_guess)
         std::cout << "Nombre d'essais nécessaires : " << std::endl << tries << std::endl;
      
      else if(choice < nb_to_guess)
         std::cout << "c'est plus" << std::endl;

      else if(choice > nb_to_guess)
         std::cout << "c'est moins" << std::endl;
   }
   return 0;
}