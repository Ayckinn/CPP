/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 04
      EXERCICE | 08
         TITLE | BETAIL
 * ===================================================== */
#include <iostream>
#define LOOP(repeat) for(int i = 0; i < repeat; i++)

int main()
{
    int karvas = 0;
    int total = 0;

    LOOP(20) 
    { 
        std::cin >> karvas;
        total = total + karvas;
    }
    std::cout << total << std::endl;
    return 0;
}