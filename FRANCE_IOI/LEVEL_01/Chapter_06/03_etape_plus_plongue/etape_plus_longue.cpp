/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 06
    EXERCICE  : 03 - ETAPE LA PLUS LONGUE
 * =================================================== */
#include <iostream>

#define LOOP(repeat) for(int i = 0; i < repeat; i++)
#define INVERSION(number) if(number < 0){ number = -number; } /* Invert negative number to positive */
#define DISTANCE_MAX(max, distance) if(max <= distance){ max = distance; }

int main()
{
   int days(0);
   int distance(0);
   int max(0);
   
   INVERSION(days);
   std::cin >> days;

   LOOP(days)
   {
      std::cin >> distance;
      DISTANCE_MAX(max, distance);
   }
   std::cout << max << std::endl;
   return 0;
}