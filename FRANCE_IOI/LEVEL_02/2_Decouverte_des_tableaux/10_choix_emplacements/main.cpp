/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 02
      EXERCICE | 10
         TITLE | CHOIX DES EMPLACEMENTS
 * ===================================================== */
#include <iostream>

int main()
{
    int nb_places = 0;
    std::cin >> nb_places;

    int dealers[nb_places] = {0};
    int dealer_place = 0;
    for(int i = 0; i < nb_places; i++)
    {
        std::cin >> dealer_place;
        dealers[dealer_place] = i;
    }

    for(int pos = 0; pos < nb_places; pos++)
        std::cout << dealers[pos] << std::endl;

    return 0;
}
