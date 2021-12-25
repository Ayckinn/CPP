/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 03
    EXERCICE  : 10
    TITLE     : KERMESSE
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int attempt = 0;
   int candies = 0;

   LOOP(50)
   {
      attempt++;
      candies = candies + attempt;
      std::cout << candies << std::endl;
   }
   return 0;
}