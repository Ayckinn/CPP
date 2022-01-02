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
   int xMin = 0;
   int xMax = 0;
   int yMin = 0;
   int yMax = 0;
   int houses = 0;
   int xHouse = 0;
   int yHouse = 0;
   int area = 0;

   std::cin >> xMin >> xMax >> yMin >> yMax >> houses;

   LOOP(houses)
   {
      std::cin >> xHouse >> yHouse;

      if((xHouse >= xMin) && (yHouse >= yMin))
      {
         if((xHouse <= xMax) && (yHouse <= yMax))
            area++;
      }
   }
   std::cout << area << std::endl;
   return 0;
}