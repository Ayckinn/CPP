/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 07
    EXERCICE  : 06
    TITLE     : CASERNES DE POMPIERS
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int pairs = 0;
   int xMin0 = 0;
   int xMax0 = 0;
   int yMin0 = 0;
   int yMax0 = 0;
   int xMin1 = 0;
   int xMax1 = 0;
   int yMin1 = 0;
   int yMax1 = 0;

   std::cin >> pairs;
   
   LOOP(pairs)
   {
      std::cin >> xMin0 >> xMax0 >> yMin0 >> yMax0 >> xMin1 >> xMax1 >> yMin1 >> yMax1;

      if((xMin0 >= xMax1) || (xMin1 >= xMax0) || (yMin0 >= yMax1) || (yMin1 >= yMax0))
         std::cout << "NON" << std::endl;
      else
         std::cout << "OUI" << std::endl;
   }
   return 0;
}