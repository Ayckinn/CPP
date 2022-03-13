/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 03
      EXERCICE | 06
         TITLE | UNE PARTIE DE CACHE-CACHE
 * ===================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 1; i < repeat; i++)

int main()
{
    LOOP(101)
        std::cout << i << std::endl;
    
    std::cout << "J'arrive !" << std::endl;
    return 0;
}