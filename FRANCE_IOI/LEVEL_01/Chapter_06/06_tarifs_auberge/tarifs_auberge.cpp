/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 06
    EXERCICE  : 06 - TARIFS DE L'AUBERGE
 * =================================================== */
#include <iostream>

int main()
{
   int age(0);
   int poids_bagage(0);

   std::cin >> age >> poids_bagage;

   if(age < 10)
      std::cout << 5 << std::endl;
   else
   {
      if(age == 60)
         std::cout << 0 << std::endl;
      else
      {
         if(poids_bagage >= 20)
            std::cout << 40 << std::endl;
         else
            std::cout << 30 << std::endl;
      }
   }
   return 0;
}