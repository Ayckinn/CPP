/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 07
    EXERCICE  : 05 - NOMBRE DE PERSONNES A LA FETE
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int invites(0);
   int presence(0);
   int max(0);
   int total(0);

   std::cin >> invites;

   LOOP(invites * 2)
   {
      std::cin >> presence;

      if(presence > 0)
        max++;
      if(presence < 0)
        max--;
      if(total < max)
        total = max;
   }
   std::cout << total << std::endl;
   return 0;
}