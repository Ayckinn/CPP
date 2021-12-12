/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 06
    EXERCICE  : 04
    TITLE     : CALCUL DES DENIVELEES
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int montees_descentes(0);
   int variations(0);
   int montees(0);
   int descentes(0);

   std::cin >> montees_descentes;

   LOOP(montees_descentes)
   {
      std::cin >> variations;

      if(variations < 0)
         descentes = descentes + variations;
      else
         montees = montees + variations;
   }
   if(descentes < 0)
      descentes = -descentes;

   std::cout << montees << std::endl << descentes << std::endl;
   return 0;
}