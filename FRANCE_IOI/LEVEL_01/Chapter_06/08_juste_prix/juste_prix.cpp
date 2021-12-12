/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 06
    EXERCICE  : 08
    TITLE     : LE JUSTE PRIX
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int marchands(1);
   int prix(0);
   int galette(1000 * 1000);
   int pos(0);
   int posMax(0);

   std::cin >> marchands;

   LOOP(marchands)
   {
      pos++;
      std::cin >> prix;
      
      if(prix <= galette) 
      {
         galette = prix;
         if(prix == galette)
            posMax = pos;
      }
   }
   std::cout << posMax << std::endl;
   return 0;
}