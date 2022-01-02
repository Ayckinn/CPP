/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 03
    EXERCICE  : 03
    TITLE     : BONBONS POUR TOUT LE MONDE
 * =================================================== */
#include <iostream>

int main()
{
   int first_class = 25;
   int second_class = 30;
   int third_class = 27;
   int fourth_class = 22;
   int unavailable = 8;
   int candies = 3;
   int peoples = first_class + second_class + third_class + fourth_class - unavailable;

   std::cout << peoples * candies << std::endl;
   return 0;
}