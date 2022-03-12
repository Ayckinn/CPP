/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 04
      EXERCICE | 09
         TITLE | CONVERTISSEUR D'UNITES
 * ===================================================== */
#include <iostream>

const double FEET_TO_M = 0.3048;
const double GR_TO_LBS = 0.002205;

//---------------------------------------------------------
double mToFeet(double value)
{
   return (value / FEET_TO_M);
}

double grToLBS(double value)
{
   return (value * GR_TO_LBS);
}

double cToF(double value)
{
   return (value * 1.8 + 32);
}
//=========================================================
int main()
{
   int measure = 0;
   std::cin >> measure;

   for(int m = 0; m < measure; m++)
   {
      double value = 0;
      char unity;
      std::cin >> value >> unity;

      switch(unity)
      {
         case 'm':
            std::cout << mToFeet(value) << " p\n";
            break;

         case 'g':
            std::cout << grToLBS(value) << " l\n";
            break;

         case 'c':
            std::cout << cToF(value) << " f\n";
            break;
      }
   }
   return 0;
}
