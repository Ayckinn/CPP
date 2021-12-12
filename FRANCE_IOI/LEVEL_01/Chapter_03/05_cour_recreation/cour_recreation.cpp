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
   int longueur_cote((17 * 5) + (7 * 2) + 5 + (2 * 2));
   int surface(longueur_cote * longueur_cote);
   int perimetre(longueur_cote * 4);

   std::cout << surface << std::endl;
   std::cout << perimetre << std::endl;

   return 0;
}