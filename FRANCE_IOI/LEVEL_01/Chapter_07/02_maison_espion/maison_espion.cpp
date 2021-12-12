/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 07
    EXERCICE  : 02
    TITLE     : MAISON DE L'ESPION
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int xMin(0);
   int xMax(0);
   int yMin(0);
   int yMax(0);
   int maisons(0);
   int xMaison(0);
   int yMaison(0);
   int zone(0);

   std::cin >> xMin >> xMax >> yMin >> yMax >> maisons;

   LOOP(maisons)
   {
      std::cin >> xMaison >> yMaison;

      if((xMaison >= xMin) && (yMaison >= yMin))
      {
         if((xMaison <= xMax) && (yMaison <= yMax))
            zone++;
      }
   }
   std::cout << zone << std::endl;
   return 0;
}