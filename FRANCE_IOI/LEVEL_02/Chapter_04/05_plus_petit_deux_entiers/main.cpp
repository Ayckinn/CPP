/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 04
      EXERCICE | 05
         TITLE | LE PLUS PETIT DE DEUX ENTIERS
 * ===================================================== */
#include <iostream>

int min2(int min, int usr_nb)
{
    if(min < usr_nb)
        return min;
    else
        return usr_nb;
}
//=========================================================
int main()
{
    int user_number = 0;
    int store = 10000;

    for(int i = 0; i < 10; i++)
    {
        std::cin >> user_number;
        store = min2(store, user_number);
    }

    std::cout << store << std::endl;
    return 0;
}
