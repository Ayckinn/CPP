/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 03
    EXERCICE  : 12 - CONSTRUCTION D'UNE PYRAMIDE
 * =================================================== */
#include <iostream>
#include <cmath>

#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int level(1);
   int square(0);

   loop(9)
   {
      square = (square + pow(level, 3));
      level += 2;
   }
   std::cout << square << std::endl;
   return 0;
}