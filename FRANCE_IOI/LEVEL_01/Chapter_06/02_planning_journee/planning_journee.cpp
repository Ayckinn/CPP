/* =================== DESCRIPTION =================== *
    AUTHOR    : Ayckinn
    COPYRIGHT : ©2021
    LANGUAGE  : C++
    LEVEL     : 01
    CHAPTER   : 06
    EXERCICE  : 02
    TITLE     : PLANNING DE LA JOURNEE
 * =================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int pos_actuelle(0);
   int nombre_villes(0);
   int villes(0);
   int total(0);

   std::cin >> pos_actuelle >> nombre_villes;

   LOOP(nombre_villes)
   {
      std::cin >> villes;

      if(villes >= (pos_actuelle - 50) && villes <= (pos_actuelle + 50))
         total++;
   }
   std::cout << total << std::endl;
   return 0;
}