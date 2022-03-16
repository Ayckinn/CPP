/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 03
       CHAPTER | PRELUDE
      EXERCICE | 04
         TITLE | LISSAGE DE SIGNAL
 * ===================================================== */
#include <iostream>
#include <cmath>

int nb_values = 0;
int turn = 0;
const int MAX_VALUES = 200;
double values[MAX_VALUES];
double temp[MAX_VALUES];
double limit = 0;

//---------------------------------------------------------
bool Smoothing()
{
   for(int pos = 1; pos < nb_values; pos++)
   {
      if(std::abs(values[pos] - values[pos - 1]) > limit)
         return false;
   }
   return true;
}
//---------------------------------------------------------
int main()
{
   std::cin >> nb_values >> limit;

   for(int pos = 0; pos < nb_values; pos++)
      std::cin >> values[pos];

   while(!Smoothing())
   {
      turn++;

      for(int pos = 1; pos < (nb_values - 1); pos++)
         temp[pos] = ((values[pos - 1] + values[pos + 1]) / 2);

      for(int pos = 1; pos < (nb_values - 1); pos++)
         values[pos] = temp[pos];
   }
   std::cout << turn << std::endl;
   return 0;
}
