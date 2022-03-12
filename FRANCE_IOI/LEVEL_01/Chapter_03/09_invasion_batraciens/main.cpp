/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 03
      EXERCICE | 09
         TITLE | INVASION DE BATRACIENS
 * ===================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int frogs = 1337;

   LOOP(12)
      frogs *= 2;

   std::cout << frogs << std::endl;
   return 0;
}