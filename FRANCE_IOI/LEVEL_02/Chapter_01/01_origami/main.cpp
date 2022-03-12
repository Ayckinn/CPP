/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 01
      EXERCICE | 01
         TITLE | ORIGAMI
 * ===================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

double sheet_thickness = 0.011;
int bending = 15;

int main()
{
   LOOP(bending)
      sheet_thickness *= 2;
   
   std::cout << sheet_thickness << std::endl;
   return 0;
}