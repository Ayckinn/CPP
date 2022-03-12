/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 05
      EXERCICE | 03
         TITLE | TARIFS DEGRESSIFS
 * ===================================================== */
#include <iostream>

int main()
{
   int arrival_time = 0;
   int room_price = 10;
   int tax = 5;
   int price_max = 53;

   std::cin >> arrival_time;
   int price = (room_price + tax * arrival_time); 

   if(price > price_max)
      std::cout << price_max << std::endl;
   else
      std::cout << price << std::endl;

   return 0;
}