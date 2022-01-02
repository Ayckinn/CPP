/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 06
    EXERCICE  : 05
    TITLE     : TYPE D'ARBRES
 * =================================================== */
#include <iostream>

int main()
{
   int height = 0;
   int folioles = 0;

   std::cin >> height >> folioles;

   if(height <= 8)
   {
      if(folioles >= 8)
         std::cout << "Tinuviel" << std::endl;
      else
         std::cout << "Falarion" << std::endl;
   }
   else if(height >= 10)
   {
      if(folioles >= 10)
         std::cout << "Calaelen" << std::endl;
      else
         std::cout << "Dorthonion" << std::endl;
   }
   return 0;
}