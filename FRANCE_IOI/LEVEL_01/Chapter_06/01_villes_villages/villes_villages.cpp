/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 06
    EXERCICE  : 01
    TITLE     : VILLES ET VILLAGES
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int ville(0);
   int habitants(0);
   int total(0);

   std::cin >> ville;

   LOOP(ville)
   {
      std::cin >> habitants;
      
      if(habitants > 10000)
         total++;
   }
   std::cout << total << std::endl;
   return 0;
}