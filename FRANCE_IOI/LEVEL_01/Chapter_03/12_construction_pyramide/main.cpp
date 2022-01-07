/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 03
    EXERCICE  : 12
    TITLE     : CONSTRUCTION D'UNE PYRAMIDE
 * =================================================== */
#include <iostream>
#include <cmath>

int main()
{
   int result = (pow(9, 2) * (2 * pow(9, 2) - 1));
   std::cout << result << std::endl;

   return 0;
}

/**
 * Pour pouvoir utiliser la puisance au carré d'in nombre, 
 * il faut utiliser la fonction [pow] de la librairie [cmaths]
 * Il faudra lui passer 2 paramaètres : le nombre et sa puissance, 
 * ici : 9 puissance 2
 * **/

/* -- 2eme FACON --
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
*/