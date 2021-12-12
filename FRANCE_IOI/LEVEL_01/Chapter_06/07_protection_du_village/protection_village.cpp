/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 06
    EXERCICE  : 07
    TITLE     : PROTECTION DU VILLAGE
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int maison(0);
   int xAxe(0);
   int yAxe(0); 
   int xMax(0);
   int yMax(0);
   int xMin(1000 * 1000); 
   int yMin(1000 * 1000);

   std::cin >> maison;

   LOOP(maison)
   {
      std::cin >> xAxe >> yAxe;
      
      if(xAxe < xMin)
         xMin = xAxe;
      if(xAxe > xMax)
         xMax = xAxe;
      if(yAxe < yMin)
         yMin = yAxe;
      if(yAxe > yMax)
         yMax = yAxe;
   }
   int xIntervalle = (xMax - xMin);
   int yIntervalle = (yMax - yMin);
   int perimetre = ((xIntervalle + yIntervalle) * 2);
   
   std::cout << perimetre << std::endl;
   return 0;
}