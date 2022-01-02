/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 04
    EXERCICE  : 09
    TITLE     : SOCLES POUR STATUES
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int ground = 0;
   int top = 0;
   int top_width = 0;
   int interval = 0;

   std::cin >> top;
   std::cin >> ground;
   interval = (top - ground);

   LOOP(interval + 1)
   {
      top_width = (top_width + (top * top));
      top--;
   }
   std::cout << top_width << std::endl;
   return 0;
}