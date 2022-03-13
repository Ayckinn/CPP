/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 04
      EXERCICE | 06
         TITLE | JEU DE CALCUL MENTAL
 * ===================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{ 
   int number = 66;
   int multiply = 2;

   int turn = 0;
   std::cin >> turn;

   LOOP(turn) 
   { 
      std::cout << number << std::endl;
      number = number * multiply;
      multiply++; 
   }
   return 0;
}