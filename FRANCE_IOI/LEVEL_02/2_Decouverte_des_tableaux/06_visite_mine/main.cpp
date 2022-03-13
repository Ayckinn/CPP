/* ==================== DESCRIPTION ==================== *
        AUTHOR | Ayckinn
     COPYRIGHT | ©2022
      LANGUAGE | C++
         LEVEL | 02
       CHAPTER | 02
      EXERCICE | 06
         TITLE | VISITE DE LA MINE
 * ===================================================== */
#include <iostream>

int main()
{
    int inverted_moves[6] = {0, 2, 1, 3, 5, 4};

    int nb_moves = 0;
    std::cin >> nb_moves;

    int way_to_exit[nb_moves];
    for(int i = 0; i < nb_moves; i++)
        std::cin >> way_to_exit[i];

    for(int i = nb_moves - 1; i >= 0; i--)
    {
        int move = way_to_exit[i];
        std::cout << inverted_moves[move] << std::endl;
    }
    return 0;
}

/**
 * SENS NORMAL DE LA MARCHE
 *  Gauche     = 1
 *  Droite     = 2
 *  Tout droit = 3
 *  Monter     = 4
 *  Descendre  = 5
 * 
 * SENS INVERSE
 *  Gauche     = 2
 *  Droite     = 1
 *  Tout droit = 3
 *  Monter     = 5
 * Descendre   = 4
**/