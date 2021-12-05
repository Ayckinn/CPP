/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 04
    EXERCICE  : 02 - RETRAITE SPIRITUELLE
 * =================================================== */
#include <iostream>

int main()
{
   int days(0);
   int const SECONDS((16 * 60) * 60);

   std::cin >> days;
   std::cout << (days * SECONDS) << std::endl;

   return 0;
}