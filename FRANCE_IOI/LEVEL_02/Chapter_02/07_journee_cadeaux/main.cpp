/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 02
      EXERCICE | 07
         TITLE | JOURNEE DES CADEAUX
 * ===================================================== */
#include <iostream>
#include <algorithm>  //-- To use the [sort] function

int main()
{
    int nb_people = 0;
    std::cin >> nb_people;

    int money[nb_people];
    for(int i = 0; i < nb_people; i++)
        std::cin >> money[i];

    std::sort(money, money + nb_people);

    if((nb_people % 2) == 1)
    {
        int reference_money = (nb_people - 1) / 2;
        std::cout << money[reference_money] << std::endl;
    }
    else
    {
        int reference_money = nb_people / 2;
        std::cout << (double)(money[reference_money - 1] + money[reference_money]) / 2 << std::endl;
    }
    return 0;
}