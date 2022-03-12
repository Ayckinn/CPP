/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 04
      EXERCICE | 02
         TITLE | RETRAITE SPITITUELLE
 * ===================================================== */
#include <iostream>

int main()
{
   const int SEC_IN_MN = 60;
   const int MN_IN_HR = 60;
   const int DURATION_SPELL = 16;
   const int NB_SPELL = ((SEC_IN_MN * MN_IN_HR) * DURATION_SPELL);
   int duration_walk = 0;
   
   std::cin >> duration_walk;
   std::cout << NB_SPELL * duration_walk << std::endl;

   return 0;
}