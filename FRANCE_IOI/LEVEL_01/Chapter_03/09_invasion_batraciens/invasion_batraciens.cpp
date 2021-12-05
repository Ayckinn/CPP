/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 03
    EXERCICE  : 09 - INVASION DE BATRACIENS
 * =================================================== */
#include <iostream>
#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int batraciens(1337);

   loop(12)
      batraciens = (batraciens * 2);

   std::cout << batraciens << std::endl;
   return 0;
}