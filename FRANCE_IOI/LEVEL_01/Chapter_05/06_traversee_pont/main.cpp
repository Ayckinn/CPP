/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 05
    EXERCICE  : 06
    TITLE     : TRAVERSEE DU PONT
 * =================================================== */
#include <iostream>

int main()
{
   int dice_a = 0;
   int dice_b = 0;
   int dice_sum = 0;
   int tax = 36;

   std::cin >> dice_a >> dice_b;
   dice_sum = dice_a + dice_b;

   if(dice_sum >= 10)
      std::cout << "Taxe spéciale !" << std::endl << tax << std::endl;
   else
      std::cout << "Taxe régulière" << std::endl << (dice_sum * 2) << std::endl;

   return 0;
}