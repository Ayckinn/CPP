/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2021
      LANGUAGE | C++
         LEVEL | 01
       CHAPTER | 05
      EXERCICE | 01
         TITLE | TRANSPORT DES BAGAGES
 * ===================================================== */
#include <iostream>

int main()
{
    int bags = 0;
    int weight = 0;
    int result = 0;
    int limit_weight = 105;

    std::cin >> bags >> weight;
    result = (bags * weight);

    if(result > limit_weight)
        std::cout << "Surcharge !" << std::endl;

    return 0;
}