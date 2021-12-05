/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 04
    EXERCICE  : 06 - JEU DE CALCUL MENTAL
 * =================================================== */
#include <iostream>
#define loop(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int turn(0);
   int number(66);
   int multiply(2);

   std::cin >> turn;

   loop(turn) 
   { 
      std::cout << number << std::endl;
      number = number * multiply;
      multiply++; 
   }
   return 0;
}