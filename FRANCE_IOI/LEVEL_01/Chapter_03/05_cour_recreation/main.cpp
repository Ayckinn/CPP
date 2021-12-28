/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 03
    EXERCICE  : 05
    TITLE     : COUR DE RECREATION
 * =================================================== */
#include <iostream>

int main()
{
   int side_length = (17 * 5) + (7 * 2) + 5 + (2 * 2);
   int surface = side_length * side_length;
   int perimeter = side_length * 4;

   std::cout << surface << std::endl << perimeter << std::endl;
   return 0;
}