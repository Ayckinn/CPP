/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 07
    EXERCICE  : 01 - ESPION ETRANGER
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int dateDebut(0);
   int dateFin(0);
   int entrees(0);
   int dateIntervalle(0);
   int espion(0);

   std::cin >> dateDebut >> dateFin >> entrees;

   LOOP(entrees)
   {
      std::cin >> dateIntervalle;

      if((dateIntervalle <= dateFin) && (dateIntervalle >= dateDebut))
         espion++;
   }
   std::cout << espion << std::endl;
   return 0;
}