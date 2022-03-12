/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 05
      EXERCICE | 07
         TITLE | CONCOURS DE TIR A LA CORDE
 * ===================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int members = 0;
   int weight_a = 0;
   int weight_b = 0;
   int total_a = 0;
   int total_b = 0;

   std::cin >> members;

   LOOP(members)
   {
      std::cin >> weight_a >> weight_b;
      total_a = (total_a + weight_a);
      total_b = (total_b + weight_b);
   }

   if(total_a > total_b)
      std::cout << "\nL'équipe 1 a un avantage" << std::endl;
   else
      std::cout << "\nL'équipe 2 a un avantage" << std::endl;

   std::cout << "\nPoids total pour l'équipe 1 : " << total_a;
   std::cout << "\nPoids total pour l'équipe 2 : " << total_b << std::endl;

   return 0;
}