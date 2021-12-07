/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 05
    EXERCICE  : 06 - TRAVERSEE DU PONT
 * =================================================== */
#include <iostream>

int main()
{
   int deA(0);
   int deB(0);
   int somme_des(0);

   std::cin >> deA >> deB;
   somme_des = (deA + deB);

   if(somme_des >= 10)
      std::cout << "Taxe spéciale !" << std::endl << 36 << std::endl;
   else
      std::cout << "Taxe régulière" << std::endl << (somme_des * 2) << std::endl;

   return 0;
}