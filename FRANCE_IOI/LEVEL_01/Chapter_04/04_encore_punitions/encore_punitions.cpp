/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 04
    EXERCICE  : 04 - ENCORE DES PUNITIONS
 * =================================================== */
#include <iostream>
#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int write(0);
   std::cin >> write;

   loop(write)
      std::cout << "Je dois suivre en cours\n";

   return 0;
}