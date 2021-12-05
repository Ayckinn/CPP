/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 03
    EXERCICE  : 10 - KERMESSE
 * =================================================== */
#include <iostream>
#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int attempt(0);
   int candies(0);

   loop(50)
   {
      attempt++;
      candies = candies + attempt;
      std::cout << candies << std::endl;
   }
   return 0;
}