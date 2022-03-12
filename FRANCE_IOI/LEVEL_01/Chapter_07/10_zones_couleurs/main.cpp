/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 07
      EXERCICE | 10
         TITLE | ZONES DE COULEURS
 * ===================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
   int tokens = 0;
   int posX = 0;
   int posY = 0;
   
   std::cin >> tokens;

   LOOP(tokens)
   {
      std::cin >> posX >> posY;

      bool in_zone(((posX > 0) && (posX < 90)) && ((posY > 0) && (posY < 70)));
      bool yellow_zone(((posX > 25) && (posX < 50)) && ((posY > 20) && (posY < 45)));


      if(!in_zone)
         std::cout << "En dehors de la feuille" << std::endl;
      
      else if((((posX > 15) && (posX < 45)) || ((posX > 60) && (posX < 85))) && (posY > 60))
         std::cout << "Dans une zone rouge" << std::endl;

      else if ((!yellow_zone) && (posX > 10) && (posX < 85) && (posY > 10) && (posY < 55))
         std::cout << "Dans une zone bleue" << std::endl;

      else
         std::cout << "Dans une zone jaune" << std::endl;
   }
   return 0;
}