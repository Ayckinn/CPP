/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 04
    EXERCICE  : 04
    TITLE     : ENCORE DES PUNITIONS
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int write = 0;
   std::cin >> write;

   LOOP(write)
      std::cout << "Je dois suivre en cours\n";

   return 0;
}