/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 05
    EXERCICE  : 07 - CONCOURS DE TIR A LA CORDE
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int nb_membre(0);
   int poidsA(0);
   int poidsB(0);
   int totalA(0);
   int totalB(0);

   std::cin >> nb_membre;

   LOOP(nb_membre)
   {
      std::cin >> poidsA >> poidsB;
      totalA = (totalA + poidsA);
      totalB = (totalB + poidsB);
   }

   if(totalA > totalB)
      std::cout << "\nL'équipe 1 a un avantage" << std::endl;
   else
      std::cout << "\nL'équipe 2 a un avantage" << std::endl;

   std::cout << "\nPoids total pour l'équipe 1 : " << totalA;
   std::cout << "\nPoids total pour l'équipe 2 : " << totalB << std::endl;

   return 0;
}