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
   int face_sol(0);
   int face_superieure(0);
   int largeur_sup(0);
   int intervalle(0);

   std::cin >> face_superieure;
   std::cin >> face_sol;
   intervalle = (face_superieure - face_sol);

   LOOP(intervalle + 1)
   {
      largeur_sup = (largeur_sup + (face_superieure * face_superieure));
      face_superieure--;
   }
   std::cout << largeur_sup << std::endl;
   return 0;
}