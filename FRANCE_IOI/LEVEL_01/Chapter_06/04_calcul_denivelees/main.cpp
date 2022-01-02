/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 06
    EXERCICE  : 04
    TITLE     : CALCUL DES DENIVELEES
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int up_n_down = 0;
   int variations = 0;
   int up = 0;
   int down = 0;

   std::cin >> up_n_down;

   LOOP(up_n_down)
   {
      std::cin >> variations;

      if(variations < 0)
         down += variations;
      else
         up += variations;
   }
   if(down < 0)
      down = -down;

   std::cout << up << std::endl << down << std::endl;
   return 0;
}