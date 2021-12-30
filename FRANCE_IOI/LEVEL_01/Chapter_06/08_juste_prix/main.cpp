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
   int dealers = 1;
   int price = 0;
   int pancakes = 1000*1000;
   int pos = 0;
   int pos_max = 0;

   std::cin >> dealers;

   LOOP(dealers)
   {
      pos++;
      std::cin >> price;
      
      if(price <= pancakes) 
      {
         pancakes = price;
         if(price == pancakes)
            pos_max = pos;
      }
   }
   std::cout << pos_max << std::endl;
   return 0;
}