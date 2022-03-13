/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 05
      EXERCICE | 02
         TITLE | BORNES KILOMETRIQUES
 * ===================================================== */
#include <iostream>

int main()
{
    int checkpoint_a = 0;
    int checkpoint_b = 0;

    std::cin >> checkpoint_a >> checkpoint_b;

    if(checkpoint_a < checkpoint_b)
        std::cout << checkpoint_b - checkpoint_a << std::endl;
    else
        std::cout << checkpoint_a - checkpoint_b << std::endl;

    return 0;
}